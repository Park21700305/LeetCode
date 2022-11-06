public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
          this.left = left;
          this.right = right;
      }
  }

class Solution {
    int result;
    public void func(TreeNode root){
        if(root == null) return;
        if(root.left == null && root.right == null) return;
        if(root.left != null && root.left.left == null && root.left.right ==null){
            result += root.left.val;
        }
        func(root.left);
        func(root.right);
    }
    public int sumOfLeftLeaves(TreeNode root) {
        result = 0;
        func(root);
        return result;
    }
}