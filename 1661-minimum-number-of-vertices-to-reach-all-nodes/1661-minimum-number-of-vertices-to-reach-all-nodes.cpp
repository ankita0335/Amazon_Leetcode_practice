class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>indeg(n,false);
        for(auto ele: edges)
        {
            int u= ele[0];
            int v= ele[1];
            //u->v
            indeg[v]=true;
        }
        vector<int>ans;
        for(int i=0;i<indeg.size();i++)
        {
            if(indeg[i]==false)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};