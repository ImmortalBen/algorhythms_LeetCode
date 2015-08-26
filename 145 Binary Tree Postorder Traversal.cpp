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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (!root){
            return ans;
        }
        auto left = postorderTraversal(root->left);
        ans.insert(ans.end(), left.begin(), left.end());
        auto right = postorderTraversal(root->right);
        ans.insert(ans.end(), right.begin(), right.end());
        ans.push_back(root->val);
        return ans;
    }
};