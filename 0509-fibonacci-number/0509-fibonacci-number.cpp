class Solution {
public:
    int fib(int n) {
        int prev=0;
        int curr=1;
        if(n==0)return prev;
        if(n==1)return curr;
        int ans=0;
        for(int i=2;i<=n;i++){
            ans=prev+curr;
            prev=curr;
            curr=ans;
        }
   return ans; }
};