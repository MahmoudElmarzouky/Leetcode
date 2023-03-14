/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public int ans;
    public int SumNumbers(TreeNode root) {
     dfs(root,0);
        return ans;
    }
    public void dfs(TreeNode root,int number){
        if(root.left is null && root.right is null){
               number=root.val+number*10;
                ans+=number;
            return;
        }
        number=root.val+number*10;
        if(root.left is not null )
            dfs(root.left,number);
        if(root.right is not null)
            dfs(root.right,number);
    }
}