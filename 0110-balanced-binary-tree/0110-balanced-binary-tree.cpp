/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left, right) + 1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }
        int a = height(root->left);
        int b = height(root->right);
        bool temp = (abs(a - b) <= 1);
        bool aa = isBalanced(root->left);
        bool bb = isBalanced(root->right);
        if (temp and aa and bb) {
            return true;
        } else {
            return false;
        }
    }
};