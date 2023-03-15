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
    public bool IsCompleteTree(TreeNode root) {
    if(root==null)return true;
     Queue<TreeNode> q=new Queue<TreeNode>();
     q.Enqueue(root);
     bool isNullNode=false;
        while(q.Count!=0){
           var node=q.Peek();
            q.Dequeue();
          if(node==null)
              isNullNode=true;
          else {
              if(isNullNode)return false;
               q.Enqueue(node.left);
               q.Enqueue(node.right);
          }
        }
     return true;
    
    }
}