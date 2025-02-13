class Solution {
public:
    int solveusingrec(vector<int>&nums,int index,vector<int>&dp){
        if(index>=nums.size()){
            return 0;
        }
        int include=nums[index] + solveusingrec(nums,index+2,dp);
        int exclude=0+solveusingrec(nums,index+1,dp);
        int ans=max(include,exclude);
        return ans;
    }
    int solveusingmem(vector<int>&nums,int index,vector<int>&dp){
        if(index>=nums.size()){
            return 0;
        }
        if(dp[index]==-1){
            int include=nums[index]+solveusingmem(nums,index+2,dp);
            int exclude=0+solveusingmem(nums,index+1,dp);
            return dp[index]=max(include,exclude);
        }
        return dp[index];
    }
    int solveusingtab(vector<int>&nums){
        int n=nums.size();
        vector<int>dp(n+1,0);
        dp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            int include=nums[i]+dp[i+2];
            int exclude=0+dp[n-1];
            dp[i]=max(include,exclude);
        }
        return dp[0];
    }
    int solveusingspaceopt(vector<int>&nums){
          int n=nums.size();
          if(n==0){
              return 0;
          }
          int prev=nums[n-1];
          int next=0;
          int ans=prev;
          for(int i=n-2;i>=0;i--){
              int include=nums[i]+next;
              int exclude=0+prev;
              ans=max(include,exclude);
              next=prev;
              prev=ans;
          }
          return ans;
    }
    int rob(vector<int>& nums) {
        return solveusingspaceopt(nums);
    }
};