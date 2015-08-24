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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root){
            return nullptr;
        }
        int rval = root->val;
        int pval = p->val;
        int qval = q->val;
        if (rval>pval && rval>qval){
            return lowestCommonAncestor(root->left, p, q);
        }
        if (rval<pval && rval<qval){
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
};