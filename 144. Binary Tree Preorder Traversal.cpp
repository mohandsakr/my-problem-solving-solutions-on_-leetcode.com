/*
problem link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/
problem name: 144. Binary Tree Preorder Traversal
Status: Accepted.
Author: Mohand sakr.
** */


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
    vector<int> vect;
public:
    vector<int> preorderTraversal(TreeNode* root) {

        traversal(root);
         return vect;
    }

     void traversal(TreeNode* root) {
        if(root ==NULL) return;
        vect.push_back(root->val);
        traversal(root->left);
        traversal(root->right);

    }
     

};
