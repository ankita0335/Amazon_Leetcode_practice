class Codec {
public: 
    TreeNode* des(queue<string>&q)
    {
        string s = q.front();
        q.pop();
        if(s == "NULL")   
            return NULL;
        TreeNode* root = new TreeNode(stoi(s));
        root->left = des(q);
        root->right = des(q);
        return root;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root)
            return "NULL,";
        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string s;
        for (int i = 0; i < data.size(); i++) 
        {
            if (data[i] == ',') 
            {
                q.push(s);
                s = "";
            } else 
            {
                s += data[i];
            }
        }
        if (!s.empty()) 
            q.push(s);
        return des(q);
    }
};
