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

    int preorder(TreeNode* root, int i) {
        if (root == nullptr) return i;
        i++;
        int l_depth = preorder(root->left, i);
        int r_depth = preorder(root->right, i);

        return max(l_depth, r_depth);
    }

    int maxDepth(TreeNode* root) {
        int i = 0;
        int depth = preorder(root, i);
        return depth;
    }
};