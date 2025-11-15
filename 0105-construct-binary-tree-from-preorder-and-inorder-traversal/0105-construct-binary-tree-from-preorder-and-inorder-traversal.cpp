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
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int strt, int end, int &idx){
        if(strt > end)  return NULL;
        int val = preorder[idx];
        int i = strt;
        while(i < inorder.size()){
            if(inorder[i] == val){
                break;
            }
            i++;
        }
        idx++;
        TreeNode* root =  new TreeNode(val);
        root->left = solve(preorder, inorder, strt, i-1, idx);
        root->right = solve(preorder, inorder, i+1, end, idx);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int idx = 0;
        return solve(preorder, inorder, 0, n-1, idx);
    }
};