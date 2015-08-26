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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (!root){
            return ans;
        }
        ans.push_back(root->val);
        auto left = preorderTraversal(root->left);
        ans.insert(ans.end(), left.begin(), left.end());
        auto right = preorderTraversal(root->right);
        ans.insert(ans.end(), right.begin(), right.end());
        return ans;
    }
};