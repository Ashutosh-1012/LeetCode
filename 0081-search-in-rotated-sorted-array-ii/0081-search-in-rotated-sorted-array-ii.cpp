class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[start]==nums[mid] and nums[mid]==nums[end]){
                start++;
                end--;
                // continue;
            }
            else if(nums[start]<=nums[mid]){
                if(target>=nums[start] and target <= nums[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }
            else {
                if(target>=nums[mid] and target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return false;
    }
};