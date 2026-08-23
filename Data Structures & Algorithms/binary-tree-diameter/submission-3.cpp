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
    int hei(TreeNode* root){
        if(root==nullptr) return 0;
        return max(hei(root->left),hei(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;
        int c=hei(root->left)+hei(root->right);
        int l=diameterOfBinaryTree(root->left);
        int r=diameterOfBinaryTree(root->right);
        return max(c,max(l,r));
    }
};
