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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (!nums.size()){
            return nullptr;
        }
        int size = nums.size();
        TreeNode* root = new TreeNode(0);
        if (size==1){
            root->val = nums[0];
            return root;
        }
        root->val = nums[size/2];
        if (size/2 > 0){
            vector<int> left(nums.begin(), nums.begin()+size/2);
            root->left = sortedArrayToBST(left);
        }
        if (size/2+1 < size){
            vector<int> right(nums.begin()+size/2+1, nums.end());
            root->right = sortedArrayToBST(right);
        }
        return root;
    }
};