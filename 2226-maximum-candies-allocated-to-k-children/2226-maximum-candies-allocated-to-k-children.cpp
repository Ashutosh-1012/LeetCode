class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int l = 1, h = *max_element(candies.begin(), candies.end());
        int ans = 0;

        while (l <= h) {
            int mid = (l + h) / 2;
            long long sum = 0;

            for (int c : candies) {
                sum += c / mid;
            }

            if (sum >= k) {
                ans = mid;  
                l = mid + 1;  
            } else {
                h = mid - 1; 
            }
        }
        return ans;
    }
};