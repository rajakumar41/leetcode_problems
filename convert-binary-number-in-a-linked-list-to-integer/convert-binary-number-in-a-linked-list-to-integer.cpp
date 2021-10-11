/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getlen(ListNode* head){
        ListNode*temp = head;
        int count =1;
        while(temp->next!=NULL){
            count++;
            temp = temp->next;
        }
        // cout<<count<<endl;
        return count;
        
    }
    
    int getDecimalValue(ListNode* head) {
        int n = getlen(head); 
        int sum =0;
        
        while(head->next!=NULL && n>=0){
            // cout<<head->val<<endl;
            sum +=(head->val * pow(2,n-1));
            n--;
            head = head->next;   
        }
        sum += (head->val * pow(2,n-1));
        return sum;
    }
};