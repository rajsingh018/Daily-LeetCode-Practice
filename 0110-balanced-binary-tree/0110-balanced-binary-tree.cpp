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
    int subtree(TreeNode* root){
        // base case
        if(root==NULL){
            return 0;
        } 
        
        int left = subtree(root->left);
        int right = subtree(root->right);
        int ans = max(left, right)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int left = subtree(root->left);
        int right = subtree(root->right);
        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};