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
    private IList<int> ans=new List<int>(); 
   
    public IList<int> InorderTraversal(TreeNode root) {
        InOrder(root);
        return ans;
    }
    
    public void InOrder(TreeNode root){
        if(root == null)return;
        InOrder(root.left);
        ans.Add(root.val);
        InOrder(root.right);
    }
}