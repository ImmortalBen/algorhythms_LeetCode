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
    TreeNode* invertTree(TreeNode* root) {
        if (root==nullptr)
            return root;
       	TreeNode *tmp = nullptr;
       	tmp = root->left;
	root->left = root->right;
	root->right = tmp;
	if (root->left != nullptr) {
		invertTree(root->left);
	}
	if (root->right != nullptr) {
		invertTree(root->right);
	}
	return root;
    }
};