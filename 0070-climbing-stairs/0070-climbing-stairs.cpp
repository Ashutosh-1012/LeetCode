class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int prev2=2;
        int prev=1;
        int ans=0;
        for(int i=3;i<=n;i++){
          ans=prev+prev2;
          prev=prev2;
          prev2=ans;
        }
        return ans;

            }
};