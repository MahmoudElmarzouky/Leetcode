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
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL)return true;
        
        queue<TreeNode*>q;
        q.push(root->left);
        q.push(root->right);
        
        while(!q.empty()){
           
            auto leftSide=q.front();
            q.pop();
            auto rightSide=q.front();
            q.pop();
            
            if(!rightSide&&!leftSide)continue;
            
            if(!leftSide||!rightSide||leftSide->val!=rightSide->val)return false;
            q.push(leftSide->left);
            q.push(rightSide->right);
            q.push(leftSide->right);
            q.push(rightSide->left);
          
        }
        return true;
    }
};