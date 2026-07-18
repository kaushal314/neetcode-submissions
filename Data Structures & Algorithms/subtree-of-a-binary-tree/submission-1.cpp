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
    bool iside(TreeNode* root1, TreeNode* root2){
        if(root1==nullptr && root2==nullptr){
            return true;
        }
        else if(root1==nullptr || root2==nullptr){
            return false;
        }
        if(root1->val!=root2->val){
            return false;
        }
        return (iside(root1->left,root2->left))&&(iside(root1->right,root2->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr && subRoot==nullptr){
            return true;
        }
        else if(root==nullptr || subRoot==nullptr){
            return false;
        }
        if(root->val==subRoot->val){
            if(iside(root,subRoot)){
                return true;
            }
        }
        int l=isSubtree(root->left,subRoot);
        if(!l){
            return isSubtree(root->right,subRoot);
        }
        return true;
    }
};
