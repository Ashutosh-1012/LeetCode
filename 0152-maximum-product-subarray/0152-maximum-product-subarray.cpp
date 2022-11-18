class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int maxi=nums[0];
        int mini=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(mini,maxi);
            }
            maxi=max(maxi*nums[i],nums[i]);
            mini=min(mini*nums[i],nums[i]);
            ans=max(ans,maxi);
        }
        return ans;
    }
};