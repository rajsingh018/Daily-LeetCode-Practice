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
    void sum(TreeNode* root, bool left, int &ans){
        if(!root) return;
        
        if(!root->left && !root->right && left) {
            ans += root->val;
            return;
        }
        
        sum(root->left, true, ans);
        sum(root->right, false, ans);
    }
    
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        sum(root, false, ans);
        return ans;
    }
};