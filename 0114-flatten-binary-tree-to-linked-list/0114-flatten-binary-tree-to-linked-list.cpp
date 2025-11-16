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
    void preorder(TreeNode* root, vector<int>&ans){
        if(root == NULL)    return;
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    void flatten(TreeNode* root) {
        vector<int>ans;
        preorder(root, ans);
        if(root == nullptr) return;
        TreeNode* res = root;
        res->left = nullptr;
        for(int i = 1 ; i < ans.size(); i++){
            res->right = new TreeNode(ans[i]);
            res= res->right;
        }
    }
};