class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        long long ans = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++) {
            long long left = lower-nums[i];
            long long right = upper-nums[i];
            int a = lower_bound(nums.begin()+i+1,nums.end(),left)-nums.begin();
            int b = upper_bound(nums.begin()+i+1,nums.end(),right)-nums.begin();
            b--;
            if(a<=b) ans+= (b-a+1);
        }
        
        return ans;
    }
};