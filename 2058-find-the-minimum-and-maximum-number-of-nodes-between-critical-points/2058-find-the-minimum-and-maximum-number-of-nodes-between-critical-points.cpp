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
int find(ListNode*head){
    ListNode*temp=head;
    int answer=0;
    while(temp){
     answer++;
     temp=temp->next;
    }
    return answer;
}
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int size=find(head);
        if(size<4){
            return vector<int>{-1,-1};
        }
        vector<int>ans(2,-1);
        vector<int>v;
        for(int i=0;i<size;i++){
          v.push_back(head->val);
          head=head->next;
        }
        vector<int>a;
        for(int i=1;i<v.size()-1;i++){
          if(v[i]<v[i-1] and v[i]<v[i+1]){
              a.push_back(i);
          }
          else if(v[i]>v[i-1] and v[i]>v[i+1]){
              a.push_back(i);
          }
        }
        if(a.size()<2){
            return ans;
        }
         ans[1]=abs(a[a.size()-1]-a[0]);
         int mini=INT_MAX;

        for(int i=0;i<a.size()-1;i++){
        mini=min(a[i+1]-a[i],mini);
        }
        ans[0]=mini;
        return ans;
    }
};