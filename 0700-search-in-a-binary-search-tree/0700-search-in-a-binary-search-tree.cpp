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
    void bst(TreeNode* root, int val,TreeNode*& ans){
        if(root==nullptr) return;

        if(root->val==val){
            ans=root;
        }else if(root->val<val){
            bst(root->right,val,ans);
        }else{
            
            bst(root->left,val,ans);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=nullptr;
        bst(root,val,ans);
        return ans;
    }
};