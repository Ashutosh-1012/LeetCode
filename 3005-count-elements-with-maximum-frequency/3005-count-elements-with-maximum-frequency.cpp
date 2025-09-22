class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>ans;
        int maxi=INT_MIN;
        for(auto i:nums){
            ans[i]++;
            maxi=max(maxi,ans[i]);
        }
        int answer=0;
        for(auto i:ans){
            if(i.second==maxi){
                answer+=maxi;
            }
        }
        return answer;
    }
};