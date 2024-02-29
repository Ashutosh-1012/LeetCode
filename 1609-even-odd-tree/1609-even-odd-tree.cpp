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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == NULL) return true;
        bool flag = true;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            int maxi = -1;
            int mini = 1e9;
            for(int i = 0; i<size ; i++){
                TreeNode* node = q.front();
                q.pop();

                int val = node -> val;

                if(flag){
                    if(val%2 == 0) return false;
                    if(val<=maxi) return false;

                    maxi = max(maxi , val);
                }
                else{
                    if(val%2 == 1) return false;
                    if(val >= mini) return false;

                    mini = min(mini , val);
                }
                
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }

            flag = !flag;
        }

        return true;
    }
};