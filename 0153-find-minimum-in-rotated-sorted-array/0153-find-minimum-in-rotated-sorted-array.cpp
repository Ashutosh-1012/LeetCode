class Solution {
public:
    int findMin(vector<int>& nums) {
       int start=0;
       int end=nums.size()-1;
       int mid;
       int ans=INT_MAX;
       while(start<=end){
           mid=start+(end-start)/2;
           if(nums[start]<=nums[end]){
               return min(ans,nums[start]);
               break;
           }
           else if(nums[start]<=nums[mid]){
               ans=min(ans,nums[start]);
               start=mid+1;
           }
           else{
               ans=min(ans,nums[mid]);
               end=mid-1;
           }

       }
       return ans;
    }
};