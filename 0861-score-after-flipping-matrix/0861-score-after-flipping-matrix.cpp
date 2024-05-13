class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 0; i < rows; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < cols; j++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }
        vector<int> zeros(cols, 0);
        for (int i = 0; i < cols; ++i) {
            for (int j = 0; j < rows; ++j) {
                zeros[i] += (grid[j][i] == 0) ? 1 : 0;
            }
        }

        for (int i = 0; i < cols; ++i) {
            if (zeros[i] > rows / 2) {
                for (int j = 0; j < rows; ++j) {
                    grid[j][i] = 1 - grid[j][i];
                }
            }
        }

        int sum = 0;

        for (int i = 0; i < rows; i++) {
            int c = 0;
            for (int j = cols - 1; j >= 0; j--) {

                int deci = grid[i][j] * pow(2, c);
                sum += deci;
                c++;
            }
        }

        return sum;
    }
};