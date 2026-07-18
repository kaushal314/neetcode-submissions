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
    bool ro(TreeNode* root, TreeNode* target, vector<TreeNode*>& path) {
        if (root == nullptr) return false;

        path.push_back(root);

        if (root == target) return true;

        if (ro(root->left, target, path) || ro(root->right, target, path))
            return true;

        path.pop_back(); // backtrack
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1, path2;

        ro(root, p, path1);
        ro(root, q, path2);

        TreeNode* lca = nullptr;
        int i = 0;

        while (i < path1.size() && i < path2.size()) {
            if (path1[i] != path2[i]) break;
            lca = path1[i];
            i++;
        }

        return lca;
    }
};

