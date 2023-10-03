class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        long long int ans=0;
        vector<int>v(200,0);
        for(int i=0;i<nums.size();i++){
           v[nums[i]]++;
           cout<<v[nums[i]];
        }
        for(int i=0;i<200;i++){
            if(v[i]>1){
                  ans+=(v[i]*(v[i]-1))/2;
            }
        }

        return ans;
    }
};