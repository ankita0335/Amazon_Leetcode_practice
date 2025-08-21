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
    int helper(TreeNode* node, int mini)
    {
        if(!node)   return -1;
        if(node->val > mini)    return node->val;
        int leftt = helper(node->left, mini);
        int rightt = helper(node->right, mini);
        if(leftt ==-1)
            return rightt;
        if(rightt ==-1)  return leftt;
        return min(leftt, rightt); 
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(!root)   return -1;
        return helper(root, root->val);
    }
};