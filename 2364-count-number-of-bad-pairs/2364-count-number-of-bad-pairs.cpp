class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long int n=nums.size(),answer=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            answer+=mp[i-nums[i]]++;
        }

        return (1L*(n*(n-1))/2)-answer;
    }
};