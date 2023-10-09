class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int op = 0;
        for (char c : S) {
            if (c == '(' && op++ > 0) res += c;
            if (c == ')' && op-- > 1) res += c;
        }
        return res;
    }
};