class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int sz = (int)nums.size();

        for (int i = 0; i < sz; i++) {
            pq.push({nums[i], i});
        }

        long long score = 0;

        while (!pq.empty()) {
            int num = pq.top().first;
            int idx = pq.top().second;
            pq.pop();

            if (nums[idx] != -1) {
                score += nums[idx];
                nums[idx] = -1;
                if (idx > 0)
                    nums[idx - 1] = -1;
                if (idx < sz - 1)
                    nums[idx + 1] = -1;
            }
        }

        return score;
    }
};