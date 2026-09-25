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

    int preorder(TreeNode* root) {
        if (root == nullptr) return 0;

        int l_depth = preorder(root->left);
        int r_depth = preorder(root->right);

        int depth;

        if(l_depth == 0){
            depth = r_depth;
        } else if(r_depth == 0){
            depth = l_depth;
        } else {
            depth = min(l_depth, r_depth);
        }

        return 1 + depth;
    }

    int minDepth(TreeNode* root) {
        return preorder(root);
    }
};