/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int bstToGst(TreeNode* root, int greaterKeySum) {
        if (root == NULL) return greaterKeySum;
        if (root -> left == NULL && root -> right == NULL) { 
            root -> val += greaterKeySum;
            return root -> val;
        }
        int right = bstToGst(root -> right, greaterKeySum);
        root -> val += right;
        int left = bstToGst(root -> left, root -> val);
        return max(root -> val, left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        if (root == NULL || (root -> left == NULL && root -> right == NULL)) return root;
        bstToGst(root, 0);
        return root;
    }
};