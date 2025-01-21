class Solution {
public:
    long long gridGame(vector<vector<int>>& nums) {
        vector<vector<long long int>> grid(nums.size(), vector<long long int>(nums[0].size() + 2));
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<nums[0].size() + 1; j++) {
                grid[i][j+1] = grid[i][j];
                if (j < nums[0].size()) {
                    grid[i][j+1] += nums[i][j];
                }
            }
        }
        
        long long int ans = 1e18;
        for(int i=1; i<grid[0].size(); i++) {
            ans = min(ans, max(grid[1][i-1], grid[0][grid[0].size()-1] - grid[0][i]));
        }
        return ans;
    }
};