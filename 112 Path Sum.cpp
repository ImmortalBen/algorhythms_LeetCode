/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root==nullptr){
            return false;
        }
        if (root->val==sum&&root->left==nullptr&&root->right==nullptr){
            return true;//leaf node
        }
        if (root->left!=nullptr&&hasPathSum(root->left,sum-root->val)){
            return true;//left tree
        }
        if (root->right!=nullptr&&hasPathSum(root->right,sum-root->val)){
            return true;//right tree
        }
        return false;
        
    }
};