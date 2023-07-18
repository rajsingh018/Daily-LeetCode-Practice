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
private:
    int height(TreeNode* root){
        // base case
        if(root==NULL){
            return 0;
        }
        
        int left = height(root->left);
        int right = height(root->right);
        
        int ans = max(left, right)+1;
        return ans;
    }
public:
    int diameter(TreeNode* root) {
        // base case
        if(root==NULL){
            return 0;
        }
        
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        
        int op3 = height(root->left)+ height(root->right) + 1;
        
        int ans = max(op1, max(op3,op2));
        return ans;
    }
    
    int diameterOfBinaryTree(TreeNode* root){
        int ans = diameter(root);
        return ans-1;
    }
};