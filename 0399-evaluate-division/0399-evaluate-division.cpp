class Solution {
public:
    void dfs(string &src, string &dsc, unordered_map<string, vector<pair<string, double>>>&mp, unordered_set<string>&vis, double &ans, double pro)
    {
        if(vis.find(src)!= vis.end()){
            return ;
        }
        vis.insert(src);
        if(src == dsc){
            ans = pro;
            return;
        }
        for(auto &i : mp[src])
        {
            string s = i.first;
            double val = i.second;
            dfs(s, dsc, mp, vis,ans, pro*val);
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string, double>>> mp;
        vector<double>res;
        int n = equations.size();
        for(int i = 0; i < n; i++){
            string u = equations[i][0];
            string v = equations[i][1];
            double value = values[i];
            mp[u].push_back({v,value});
            mp[v].push_back({u, 1.0/value});
        }
        for(auto &q : queries)
        {
            string src = q[0];
            string dsc = q[1];
            double pro = 1.0;
            double ans = -1.0;
            if(mp.find(src)!= mp.end())
            {
                unordered_set<string>vis;
                dfs(src, dsc, mp, vis, ans, pro);
            }
            res.push_back(ans);
        }
        return res;
    }
};