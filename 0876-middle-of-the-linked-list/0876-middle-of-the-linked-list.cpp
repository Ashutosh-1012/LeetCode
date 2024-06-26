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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL){
             slow=slow->next;
             if(fast->next->next!=NULL){
             fast=fast->next->next;
             }else{
               return slow;
             }
        }
        return slow;
    }
};