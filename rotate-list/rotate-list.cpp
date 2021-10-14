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
        int count=1;
        while(head->next!=NULL){
            count++;
            head = head->next;
        }
        // cout<<count<<endl;
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return head;
        
        int len = getlen(head);
         k = (k % len);
        
        while(k--){
            ListNode* temp = head;
            ListNode* temp2 = new ListNode(0);
            temp2->next = head;
            while(temp->next!=NULL){
                temp = temp->next;
                temp2 = temp2->next;
            }
            temp->next =head;
            temp2->next = NULL;
            head = temp;
        }
        return head;
    }
};