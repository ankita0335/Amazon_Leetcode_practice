class Solution {
public:
    void dfs(int source, unordered_map<int, vector<pair<int,int>>>&adj, vector<bool>&vis, int &res)
    {
        vis[source]=true;
        for(auto pairr: adj[source])
        {
            int node= pairr.first;
            int dis= pairr.second;
            res= min(dis, res);
            if(!vis[node])
            {
                dfs(node, adj, vis, res);
            }
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int,vector<pair<int,int>>>adj;
        for(auto ele: roads)
        {
            int u= ele[0];
            int v=ele[1];
            int d=ele[2];
            adj[u].push_back({v,d});
            adj[v].push_back({u,d});
        }
        vector<bool>vis(n, false);
        int res= INT_MAX;
        dfs(1,adj, vis,res);
        return res;
    }
};