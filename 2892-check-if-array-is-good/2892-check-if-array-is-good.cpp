class Solution {
public:
    bool isGood(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1)return false;
        for(int i=0;i<n-2;i++){
            if(nums[i]==nums[i+1]){
                return false;
            }
            if(nums[i]!=i+1){
                return false;
            }
        }
        if(nums[n-1]==nums[n-2]){
            if(nums[n-1]==n-1){
return true;
            }
            
        }
        return false;
    }
};