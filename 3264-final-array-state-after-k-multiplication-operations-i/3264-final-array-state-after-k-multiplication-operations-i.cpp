typedef long long ll;
const ll mod = 1e9 + 7;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<ll> nums1(nums.begin(), nums.end());
        while (k != 0) {
            int z = *min_element(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == z) {
                    nums1[i] = (nums1[i] * multiplier) % mod;
                    nums[i] = nums1[i]; 
                    break;
                }
            }
            k--;
        }
        return nums;
    }
};