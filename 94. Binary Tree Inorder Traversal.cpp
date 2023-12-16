
  /*
problem link :https://leetcode.com/problems/binary-tree-inorder-traversal/
problem name: 94. Binary Tree Inorder Traversal
Status: Accepted.
Author : Mohand sakr.
*/


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
 vector<int> result;

void handle(TreeNode* root){
if(root==NULL) return;

 

 
    handle(root->left);
 
 result.push_back(root->val);

    handle(root->right);
 }
    vector<int> inorderTraversal(TreeNode* root) {
       handle(root);
       return result;
    }
};
