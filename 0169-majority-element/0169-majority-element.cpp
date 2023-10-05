class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>ma;
        for(int i=0;i<nums.size();i++){
            ma[nums[i]]++;
        }
        int maxi=INT_MIN;
        int ans=0;
        for(auto i:ma){
            if(i.second>maxi){
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};