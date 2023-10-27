// class Solution {
// public:
//  bool check(vector<int>&nums){
//      if(is_sorted(nums.begin(),nums.end()))return true;
//      else return false;
//  }
//     bool canBeIncreasing(vector<int>& nums) {
//        int n=nums.size();
//        int cnt=0;
//        vector<int>num;
//        num=nums;
//        sort(num.begin(),num.end());
//        for(int i=1;i<n;i++){
//            if(num[i]==num[i-1]){
//                cnt++;
//            }
//        }
//        if(cnt>=2)return false;
//        for(int i=1;i<n;i++){
//            if(nums[i-1]>nums[i]){
//                if(nums[i]>nums[i-2] and (i-2)>=0){
//                 nums.erase(nums.begin()+i-1);
//                }else{
//                    nums.erase(nums.begin()+i);
//                }
              
//                for(int i=0;i<nums.size()-1;i++){
//                   if(nums[i]==nums[i+1]){return false;}
//                }
//             return check(nums);
//            }
       
//     }
//     return true;
//     }
// };
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                cnt++;
                if (cnt > 1) {
                    return false;
                }

                if (i > 1 && nums[i] <= nums[i - 2]) {
                    nums[i] = nums[i - 1];
                }
            }
        }

        return true;
    }
};
