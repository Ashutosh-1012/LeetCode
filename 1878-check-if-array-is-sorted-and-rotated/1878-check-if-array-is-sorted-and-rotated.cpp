class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int an=0;
        for(int i=0;i<n-1;i++){
           if(nums[i]>nums[i+1]){
               an=i+1;
               break;
           }
        }
        vector<int>ans;
        ans=nums;
        // an++;
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            int k=(i+an)%n;
            cout<<k;
            if(nums[k]!=ans[i]){
                return false;
            }
        }
        return true;
    }
};