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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return{};
        queue<TreeNode*> qq;
        vector<vector<int>> res;
        qq.push(root);
        while(!qq.empty()){
            vector<int> temp;
            int n=qq.size();
            for(int i=0;i<n;i++){
                TreeNode* node=qq.front();
                qq.pop();
                if(node->left) qq.push(node->left);
                if(node->right) qq.push(node->right);
                temp.push_back(node->val);
            }
            res.push_back(temp);
        }
        return res;
    }
};