class Solution {
public:
    void find(vector<vector<int>>&ans,vector<int>&nums,vector<int>&subset,int i){
        ans.push_back(subset);
        for (int j = i; j < nums.size(); ++j) {
            subset.push_back(nums[j]); 
            find(ans, nums, subset, j + 1); 
            subset.pop_back();
        }
        // if(i>=nums.size()){
        //     return;
        // }
        // vector<int>temp;
        // temp.push_back(nums[i]);
        // find(ans,nums,i+1);
        // ans.push_back(temp);
        // vector<int>temp1;
        // find(ans,nums,i+1);
        // ans.push_back(temp1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        find(ans,nums,subset,0);
        return ans;
    }
};