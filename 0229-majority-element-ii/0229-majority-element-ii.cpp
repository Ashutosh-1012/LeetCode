// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         float a=float(n)/float(3);
//        sort(nums.begin(),nums.end());
//        vector<int>ans;
//        int cnt=1;
//        if(n<3)return nums;
//         for(int i=0;i<n-1;i++){
//             if(nums[i]==nums[i+1]){
//                 cnt++;
//             }
//             else if(cnt>a){
//                 ans.push_back(nums[i]);
//                 cnt=1;
//             }
//             else{
//                 cnt=1;
//             }
//         }
//         if(cnt>a){
//             ans.push_back(nums[n-1]);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int countMajority = nums.size()/3;
        unordered_set<int> set;
        vector<int> output;
        for(auto num : nums){
            int count = 0;
            for(auto element : nums){
                if(element == num){
                    count++;
                }
            }
            if(count > countMajority){
                set.insert(num);
            }
        }
        for(auto it = set.begin(); it != set.end(); it++){
            output.push_back(*it);
        }
        return output;
    }
};
