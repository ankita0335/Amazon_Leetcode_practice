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
    bool helper(TreeNode* node, int x, int y)
    {
        queue<TreeNode*>q;
        q.push(node);
        while(!q.empty())
        {   
            unordered_map<int, int>mp;
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* curr= q.front();
                q.pop();
                mp[curr->val]++;
                if(curr->left && curr->right)
                {
                    if((curr->left->val ==x && curr->right->val == y) || (curr->left->val ==y && curr->right->val == x))
                        return false;
                }
                if(curr->left)  q.push(curr->left); // queue mai push bhi to krna hoga na sth mai
                if(curr->right) q.push(curr->right);
            }
            if(mp.find(x)!= mp.end() && mp.find(y)!= mp.end())
                return true;
            if(mp.find(x)!= mp.end() || mp.find(y)!=mp.end())   return false;
        }
        return false;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root)   return false;
        bool ans = helper(root, x,y);
        return ans;
    }
};