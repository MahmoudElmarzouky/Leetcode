/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int getSum(TreeNode root ,int dir){
        if(root==null)return 0;
        if(root.left==null&&root.right==null){
            if(dir==1)return root.val;
            else return 0;
        }
        int left=getSum(root.left,1);
        int right=getSum(root.right,0);
        return left+right;
    }
    public int sumOfLeftLeaves(TreeNode root) {
     return getSum(root,0);
    }
}