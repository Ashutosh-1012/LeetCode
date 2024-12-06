class Solution {
public:
    int maxCount(vector<int>& banned, int n, int max_sum) {
        int m = banned.size();
        int idx = 0;
        int running_sum = 0;
        int count = 0;
        sort(banned.begin(), banned.end());
        for (int i = 1; i <= n; ++i) {
            if (idx < m && i == banned[idx]) {
                ++idx;
                while (idx < m && banned[idx - 1] == banned[idx]) {
                    ++idx;
                }
            } else if ((i + running_sum) <= max_sum) {
                running_sum += i;
                ++count;
            } else { 
                break;
            }
        }
        return count;
    }
};