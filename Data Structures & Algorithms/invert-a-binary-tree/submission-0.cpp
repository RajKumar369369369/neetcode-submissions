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
    void helper(TreeNode* root1,TreeNode* root2,int d){
        if(root1==nullptr){
            return;
        }
        TreeNode* t;
        if(d==-1){
            root2->left=new TreeNode(root1->val);
            t=root2->left;
        }
        else{
            root2->right=new TreeNode(root1->val);
            t=root2->right;
        }
        helper(root1->left,t,1);
        helper(root1->right,t,-1);
    }
    TreeNode* invertTree(TreeNode* root){
        TreeNode* root2=new TreeNode();
        helper(root,root2,-1);
        return root2->left;
    }
};
