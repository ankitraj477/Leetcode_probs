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
    void invert(TreeNode* root,TreeNode* &head){
        if(root==nullptr){
            head=nullptr;
             return;
        }

        head=new TreeNode(root->val);
        invert(root->left,head->right);
        invert(root->right,head->left);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* head=nullptr;
        invert(root,head);

        return head;
    }
};