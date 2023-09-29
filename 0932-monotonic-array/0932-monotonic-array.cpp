class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>ans;
        vector<int>ans1;
        ans=nums;
        ans1=nums;
        sort(ans1.begin(),ans1.end(),greater<int>());
        sort(ans.begin(),ans.end());
        if(nums==ans || nums==ans1){
            return true;
        }
        else{
            return false;
        }
       
    }
};