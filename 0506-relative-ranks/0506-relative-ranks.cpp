class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        map<int, int, greater<int>> mp;

        for (int i = 0; i < n; ++i) {
            mp[score[i]] = i;
        }
        int rank = 1;
        for (auto& it : mp) {
            switch (rank) {
            case 1:
                ans[it.second] = "Gold Medal";
                break;
            case 2:
                ans[it.second] = "Silver Medal";
                break;
            case 3:
                ans[it.second] = "Bronze Medal";
                break;
            default:
                ans[it.second] = to_string(rank);
                break;
            }
            rank++;
        }

        return ans;
    }
};