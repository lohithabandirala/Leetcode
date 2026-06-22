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
    int distributeCoins(TreeNode* root) {
        int moves=0;
func(root,moves);
        return moves;
    }
    int func(TreeNode* root,int &moves){
        if(root==NULL){
            return 0;
        }
int left=func(root->left,moves);
int right=func(root->right,moves);
        moves+=abs(left)+abs(right);
        return (root->val+left+right)-1;
    
    }
};