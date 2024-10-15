/** 
problem link: https://leetcode.com/problems/binary-tree-postorder-traversal/description/
problem name: 145. Binary Tree Postorder Traversal
Status: Accepted.
Author: Mohand sakr.
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
    vector<int> vect;

    vector<int> postorderTraversal(TreeNode* root) {
traversal(root);
 return vect;
        
    }
    
    void traversal(TreeNode* root) {
        if(root ==NULL) return;
        traversal(root->left);
        traversal(root->right);
        vect.push_back(root->val);
    }
};


