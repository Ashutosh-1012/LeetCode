class Solution {
public:
  
   int bs(vector<int>v,int start,int j){
       int end=v.size()-1;
       int mid;
       while(start<=end){
           mid=(start+end)/2;
                if(v[mid]==j){
                    return mid;
                }
                else if(v[mid]>j){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
       }
       return -1;
   }
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>>ans;
        sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
           if(bs(nums,i+1,nums[i]+k)!=-1){
               ans.insert({nums[i],nums[i]+k});
           }
       }
        return ans.size();
    }
};