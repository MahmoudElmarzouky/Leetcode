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
    int ans;
public:
    int sumNumbers(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
    void dfs(TreeNode* root,int number){
        if(!root->left&&!root->right){
               number=root->val+number*10;
                ans+=number;
            return;
        }
        number=root->val+number*10;
        if(root->left)
            dfs(root->left,number);
        if(root->right)
            dfs(root->right,number);
    }
};