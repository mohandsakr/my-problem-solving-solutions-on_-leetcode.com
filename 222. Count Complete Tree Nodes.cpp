/*
problem link : https://leetcode.com/problems/count-complete-tree-nodes/description/
problem name: 222. Count Complete Tree Nodes
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
public:
int value=0;
    int countNodes(TreeNode* root) {
        
        traverse(root);
        return value;
    }

void traverse(TreeNode* root) {
        
        if(root==NULL) return;
        ++ value;
        traverse(root->right);
        traverse(root->left);
    }

};
