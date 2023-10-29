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
    bool flag = true;

    int balanced(TreeNode* root) {
        // if flag is false, do not traverse tree further. means
        // tree is not balanced.
        if (root == NULL || !flag) 
            return 0;
        if (root->left == NULL && root->right ==NULL)
            return 1;
        int height_left = balanced(root->left);
        int height_right = balanced(root->right);
        if( abs(height_right - height_left)>1 )
            flag = false;
        return 1+max(height_left, height_right);
    }

    bool isBalanced(TreeNode* root) {
        balanced(root);
        return flag;
    }
};