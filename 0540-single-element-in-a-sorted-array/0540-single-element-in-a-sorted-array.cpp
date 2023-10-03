class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int n=nums.size();
        int end=n-1;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        start++;
        end--;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1]){
                return nums[mid];
            }else if((mid%2==0 and nums[mid]==nums[mid+1]) or (mid%2==1 and nums[mid]==nums[mid-1])){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};