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

    void dfs(TreeNode* root, int row, int col,
             map<int, map<int, multiset<int>>>& mp) {

        if (root == NULL)
            return;

        mp[col][row].insert(root->val);

        dfs(root->left, row + 1, col - 1, mp);
        dfs(root->right, row + 1, col + 1, mp);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, map<int, multiset<int>>> mp;

        dfs(root, 0, 0, mp);

        vector<vector<int>> res;

        for (auto& column : mp) {

            vector<int> temp;

            for (auto& row : column.second) {

                for (int value : row.second) {
                    temp.push_back(value);
                }
            }

            res.push_back(temp);
        }

        return res;
    }
};