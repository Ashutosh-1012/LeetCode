#include <vector>
#include <algorithm>

class Solution {
public:
    int bagOfTokensScore(std::vector<int>& tokens, int power) {
        int n = tokens.size();
        int maxScore = 0;
        int score = 0;
        std::sort(tokens.begin(), tokens.end());
        int left = 0, right = n - 1;
        
        while (left <= right) {
            if (tokens[left] <= power) {
                power -= tokens[left++];
                score++;
                maxScore = std::max(maxScore, score);
            } else if (score > 0) {
                power += tokens[right--];
                score--;
            } else {
                break;
            }
        }
        
        return maxScore;
    }
};