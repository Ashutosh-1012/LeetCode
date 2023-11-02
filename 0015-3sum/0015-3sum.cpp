// this code contain duplicate answer and it a brute force approach
//  class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>>ans;
//         int n=nums.size();
//          for(int i=0;i<n-2;i++){
//              for(int j=i+1;j<n-1;j++){
//                  for(int k=j+1;k<n;k++){
                     
//                  if(nums[i]+nums[j]+nums[k]==0){
//                      vector<int>a={nums[i],nums[j],nums[k]};
//                      ans.push_back(a);
//                      a.clear();
//                  }
//                  }
//              }
//          }
         
//          return ans;
//     }
// };
//it is a optimise and not contain duplicate element 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 3) {
            return ans;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int target = -nums[i];
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    ans.push_back({nums[i], nums[left], nums[right]})   ;  
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }       
        return ans;
    }
};
