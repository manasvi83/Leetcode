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
    int max;
    bool first = true;
    TreeNode* bstToGst(TreeNode* root) {
        right(root->right);
        root->val += max;
        max = root->val;
        left(root->left);
        return root;
    }
    
    void right(TreeNode* root){
        if(root == nullptr){
            return; 
        }
        else if(root->left == nullptr && root->right == nullptr){
            max = max > root->val ? max : root->val;
        }
        right(root->right);
        if(first){
            first = false;
        }
        else{
            root->val += max;
            max = root->val;
        }
        right(root->left);
    }
    
    void left(TreeNode* root){
        if(root == nullptr){
            return;
        }
        left(root->right);
        root->val += max;
        max = root->val;
        left(root->left);
    }
};