class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int prev=1;
        int b=2;
        int ans=0;
        for(int i=2;i<n;i++){
            ans=prev+b;
            prev=b;
            b=ans;
        }
        return ans;
    }
};