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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            m[inorder[i]] = i;
        }
        return build(preorder, 0, preorder.size()-1, 0);
    }
    unordered_map<int, int> m;
    TreeNode* build(vector<int>& preorder, int l, int r, int t) {
        if (l > r) return nullptr;
        TreeNode* root = new TreeNode(preorder[l]);
        root->left = build(preorder, l+1, l+m[preorder[l]]-t, t);
        root->right = build(preorder, l+m[preorder[l]]-t+1, r, m[preorder[l]]+1);
        return root;
    }
};