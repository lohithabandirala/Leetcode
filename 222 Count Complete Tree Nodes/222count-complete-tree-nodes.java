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
    public int countNodes(TreeNode root) {
        if (root == null) {

            return 0;

        }

        int leftHeight = 0;

        int rightHeight = 0;

        TreeNode left = root;

        TreeNode right = root;

        while (left != null) {

            leftHeight++;

            left = left.left;

        }

        while (right != null) {

            rightHeight++;

            right = right.right;

        }

        if (leftHeight == rightHeight) {

            return (int) Math.pow(2, leftHeight) - 1;

        } else {

            return 1 + countNodes(root.left) + countNodes(root.right);

        }
    }
}