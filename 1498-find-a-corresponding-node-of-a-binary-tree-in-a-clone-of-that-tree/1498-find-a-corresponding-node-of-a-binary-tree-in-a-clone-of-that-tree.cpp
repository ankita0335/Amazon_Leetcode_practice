/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* inorder(TreeNode* cloned, TreeNode* target)
    {
        if(cloned == NULL)  return NULL;
        if(cloned->val == target->val)   return cloned;
        TreeNode* left =inorder(cloned->left, target);
        if(left)    return left; //left subtree mai mila 
        TreeNode* right=inorder(cloned->right,target);
        if(right)   return right; //right subtree mai mila
        return NULL;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = inorder(cloned,target);
        return ans;
    }
};