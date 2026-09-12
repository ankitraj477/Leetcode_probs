/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr)
            return root;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            // if leaf
            if (root->left == nullptr && root->right == nullptr) {
                delete (root);
                return nullptr;
            } else {
                if (root->left == nullptr)
                    return root->right; // only right child (or no children — //
                                        // handled by leaf case already)
                if (root->right == nullptr)
                    return root->left; // only left child

                TreeNode* successor = root->right;
                while (successor->left != nullptr) {
                    successor = successor->left;
                }

                root->val = successor->val; // copy its value up
                root->right = deleteNode(root->right, successor->val);
            }
        }

        return root;
    }
};