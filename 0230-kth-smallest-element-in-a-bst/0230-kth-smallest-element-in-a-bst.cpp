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
    int tempK;
    int ans;
    void dfs(TreeNode* root){
        if(!root)return;
        dfs(root->left);
       tempK--;
       if(tempK==0){
            ans=root->val;
            return;
        }
        dfs(root->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        tempK=k;
        dfs(root);
        return ans;
    }
};