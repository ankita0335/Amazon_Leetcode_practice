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
    TreeNode* curr;
    void increase(TreeNode* node)
    {
        if(node != nullptr)
        {
            increase(node->left);
            node->left = nullptr;
            curr->right = node;
            curr= node;
            increase(node->right);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(-1); // dummy node
        curr = dummy;
        increase(root);
        return dummy->right; 
    }
};