class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size();i++){
            ans=nums[i]+nums[i-1];
            nums[i]=ans;
        }
        return nums;
    }
};