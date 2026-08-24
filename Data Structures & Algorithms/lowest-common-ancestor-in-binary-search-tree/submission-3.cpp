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
    bool rootonode(TreeNode* root,TreeNode* p,vector<TreeNode*>&p1){
        if(root==nullptr){
            return false;
        }
        p1.push_back(root);
        if(root==p) return true;
        if((rootonode(root->left,p,p1))||(rootonode(root->right,p,p1))){
            return true;
        }
        p1.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1,p2;
        rootonode(root,p,p1);
        rootonode(root,q,p2);
        TreeNode* l=nullptr;
        int i=0;
        while(i<p1.size() && i<p2.size()){
            if(p1[i]!=p2[i]) break;
            l=p1[i];
            i++;
        }
    return l;
    }
};
