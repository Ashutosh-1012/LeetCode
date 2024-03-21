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
    void reverse(ListNode*& head, ListNode*& prev) {

        if (head == NULL)
            return;

        ListNode* curr = head;
        ListNode* forward;

        if (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        reverse(forward, prev);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;

        reverse(head, prev);
        return prev;
        // iterative code
        //  ListNode* nexti,*prev=NULL;
        //  while(head){
        //      nexti=head->next;
        //      head->next=prev;
        //      prev=head;
        //      head=nexti;

        // }
        // return prev;
    }
};