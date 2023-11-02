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
    pair<int,int>f(TreeNode* root,int &cnt){
        if(root == NULL){
            return {0,0};
        }
        auto lh = f(root->left,cnt);
        auto rh = f(root->right,cnt);
        int sum = lh.first+rh.first+root->val;
        int ele = lh.second+rh.second+1;
        if(sum/ele == root->val){
            cnt++;
        }
        return {sum,ele};
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        f(root,cnt);
        return cnt;
    }
};