class Solution {
public:
    int search(vector<int>& nums, int target) {
//starting index
        int start =0;
//last index of the array
        int end=nums.size()-1;
//middle index of the array
        int mid;
        while(start<=end){
//calculating mid index in each iteration because in each iteration
//the value of either start or end are varies or changes
            mid=start+((end-start)/2);
// if element found then return index
            if(nums[mid]==target){
                return mid;
            }
//if mid index element is less then target then increse the index
// of start to mid+1
            else if(nums[mid]<target){
                start=mid+1;
            }
//else the element at mid is greater then end is == to mid-1
            else{
                end=mid-1;
            }
        }
//if element found then return -1
        return -1;
    }
};