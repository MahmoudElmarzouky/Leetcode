class Solution {
public:
    vector<long long> getNodeState(TreeNode* root) {
    if(!root->left&&!root->right){
        return vector<long long> {1,root->val,root->val};
    }
    long long mx=root->val,mn=root->val,isValidBST=1;
    if(root->left){
        vector<long long> left = getNodeState(root->left);
        if(left[2]<root->val&&left[0]){
            mn=left[1];
        }else 
        isValidBST=0;
    }
        if(root->right){
            vector<long long> right=getNodeState(root->right);
            if(right[1]>root->val&&right[0]){
            mx=right[2];
            }else 
            isValidBST=0;
        }
    return {isValidBST,mn,mx};
    }
        bool isValidBST(TreeNode* root) {
        return getNodeState(root)[0];
    }
};