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
    int getlength(ListNode* head){
        ListNode*temp=head;
        int ans=0;
        while(temp){
            ans++;
            temp=temp->next;
        }
        return ans;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL or (head->next==NULL and n>0)){
            return nullptr;
        }
         int size=getlength(head);
        if(size==n){
            head=head->next;
            return head;
        }
    size-=n;
    // cout<<size;
    ListNode*temp=head;
    while(size>1){
    temp=temp->next;
    size--;
    }
    if(temp==NULL or temp->next==NULL){
        temp=NULL;
    }
    else{
    ListNode*del=temp->next;
    temp->next=del->next;
    delete del;
    }
    return head;
    }
};