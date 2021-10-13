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
        int count =1;
        ListNode* temp = head;
        while(temp->next!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getlen(head);
        int ns = len - n;
        ListNode* temp = head;
        ListNode* prev = head;
         if(ns==0){
            // prev->next = temp->next;
            //  delete temp;
             return head->next;
        }
        else if(ns > 0){
            while(ns!=0){
                temp = temp->next;
                ns--;
                if(ns == 0){
                    prev->next = temp->next;
                    delete temp;
                }
                prev = prev->next;
            }
        }
        return head;
    }
};