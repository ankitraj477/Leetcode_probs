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
    void bst(TreeNode* root, int val,TreeNode* &node){
        if(root==nullptr) return;
        if(root->val == val) node=root;

        if(root->val>val){
            bst(root->left,val,node);
        }else{
            bst(root->right,val,node);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* node=nullptr;
        bst(root,val,node);
        return node;
    }
};