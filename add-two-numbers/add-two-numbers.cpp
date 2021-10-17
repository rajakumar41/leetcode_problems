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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
        ListNode* head = new ListNode();
        ListNode* temp = head;
        int carry = 0;
        while(l1!= 0 || l2!=0){
            
            int sum = (l1!=0? l1->val :0) + (l2!=0 ? l2->val :0) +carry;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
            carry = sum / 10;
            l1 = (l1!=NULL ? l1->next : 0);
            l2 = (l2!=NULL ? l2->next : 0);
        }
        if(carry == 1){
            temp->next = new ListNode(1);
        }
        return head->next;
    }
};