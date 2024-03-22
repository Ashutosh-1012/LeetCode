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
//    ListNode* middle(ListNode* head){
//        ListNode *fast=head;
//         ListNode*slow=head;
//         while(fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next;
//             if(fast->next!=NULL){
//                 fast=fast->next;
//             }
//             else{
//                 break;
//             }
//         }
//         return fast;
//    }
ListNode* middle(ListNode* head){
    ListNode *fast = head;
    ListNode *slow = head;
    
    while (fast ->next!= NULL ) {
        fast = fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow = slow->next;
        }
    }
    
    return slow;
}

   ListNode* reverse(ListNode *fast){
       ListNode*pre=NULL;
        while(fast!=NULL){
            ListNode*nex=fast->next;
            fast->next=pre;
            pre=fast;
            fast=nex;

        }
      return pre;
   }
    bool isPalindrome(ListNode* head) { 
        if(head==NULL || head->next==NULL){
            return 1;
        }
        ListNode*slow=middle(head);
        ListNode* fast=slow->next;
        slow->next=NULL;
        slow=head;
        fast=reverse(fast);
       
      while(slow!=NULL and fast!=NULL){
          if(fast->val!=slow->val){
              return false;
          }
          fast=fast->next;
          slow=slow->next;
      }
      return true;
    }
};