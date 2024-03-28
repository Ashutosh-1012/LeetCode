class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        int n=nums.size();
        int answer=0;
        int maxi=0;
        int end=0;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
             while (map[nums[i]] > k) {
                map[nums[end]]--;
                if (map[nums[end]] == 0) {
                    map.erase(nums[end]);
                }
                ++end;
            }
            answer=i-end+1;
            maxi=max(answer,maxi);
        }
         maxi=max(answer,maxi);
        return maxi;
    }
};