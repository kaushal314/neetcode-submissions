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
        vector<vector<int>> a;
        if (!root) return a; // Check for null root

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> level;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* c = q.front();
                q.pop();
                level.push_back(c->val);

                if (c->left != nullptr) {
                    q.push(c->left);
                }
                if (c->right != nullptr) {
                    q.push(c->right);
                }
            }

            a.push_back(level);
        }

        return a;
    }
};
