class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start =0;
        int end=nums.size()-1;
        int mid;
        if(nums[start]>target)return 0;
        if(nums[end]<target)return end+1;
        while(start<=end){
            mid=start+((end-start)/2);
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
               start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return start;
    }
};