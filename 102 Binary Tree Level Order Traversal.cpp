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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> nodes;
        queue<int> levels;
        int level = 0;
        if (!root){
            return res;
        }
        nodes.push(root);
        levels.push(level);
        
        while(!nodes.empty()) {
            auto p = nodes.front();
            level = levels.front();
            if (level>=res.size()){
                vector<int> cur;
                cur.push_back(p->val);
                res.push_back(cur);
            }
            else{
                res[level].push_back(p->val);
            }
            nodes.pop();
            levels.pop();
            if (p->left){
                nodes.push(p->left);
                levels.push(level+1);
            }
            if (p->right){
                nodes.push(p->right);
                levels.push(level+1);
            }
        }
        return res;
    }
};