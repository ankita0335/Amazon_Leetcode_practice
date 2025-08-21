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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<double>ans;
        while(!q.empty())
        {
            vector<double>curr;
            int n = q.size();
            while(n--)
            {
                TreeNode* t= q.front();
                q.pop();
                curr.push_back(t->val);
                if(t->left)     q.push(t->left);
                if(t->right)    q.push(t->right);    
            }
            int m = curr.size();
            double sum =0.0;
            for(auto i: curr)
            {
                sum+= i;
            }
            double avg = sum/m;
            ans.push_back(avg);
        }
        return ans;
    }
};