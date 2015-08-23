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
    int minDepth(TreeNode* root) {
        if (root==nullptr){
            return 0;
        }
        else if (root->right==nullptr||root->left==nullptr){
            return max(minDepth(root->left),minDepth(root->right))+1;
        }
        else{
            return min(minDepth(root->left),minDepth(root->right))+1;
        }
    }
};