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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (!root){
            return ans;
        }
        string rootStr = to_string(root->val);
        if (!root->left&&!root->right){
            ans.push_back(rootStr);
            return ans;
        }
        if (root->left){
            vector<string> left = binaryTreePaths(root->left);
            for (int i=0; i<left.size(); i++){
                left[i].insert(0, rootStr+"->");
            }
            ans.insert(ans.begin(), left.begin(), left.end());
        }
        if (root->right){
            vector<string> right = binaryTreePaths(root->right);
            for (int i=0; i<right.size(); i++){
                right[i].insert(0, rootStr+"->");
            }
            ans.insert(ans.begin(), right.begin(), right.end());
        }
        return ans;
    }

};