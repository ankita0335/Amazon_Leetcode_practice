class DisjointSet{
    public :
    vector<int> rank, parent;
    DisjointSet(int n){
        rank.resize(n, 0);
        parent.resize(n);
        for(int i=0;i<n;i++)
        {
            parent[i] = i;
        }
    }

    int findp(int u)
    {
        if(u==parent[u]){
            return u;
        }
        return parent[u] = findp(parent[u]);
    }

    void unionBy(int u, int v)
    {
        int pu = findp(u);
        int pv = findp(v);
        if(pu != pv)
        {
            if(rank[pu] > rank[pv]){
                parent[pv] = pu;
                rank[pu] += rank[pv];
            }
            else{
                parent[pu] = pv;
                rank[pv] += rank[pu];
            }
        }
    }
};
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n= accounts.size();
        DisjointSet dsu(n);
        unordered_map<string, int>mails;
        for(int i=0;i<n;i++)
        {
            int m= accounts[i].size();
            for(int j=1;j<m;j++)
            {
                string name = accounts[i][0];
                string ml= accounts[i][j];
                if(mails.find(ml)==mails.end())
                {
                    mails[ml]= i;
                }
                else
                {
                    dsu.unionBy(i,mails[ml]);
                }
            }
        }
        vector<vector<string>>mergemail(n);
        for(auto it: mails)
        {
            string mail= it.first;
            int node= dsu.findp(it.second);
            mergemail[node].push_back(mail);
        }
        vector<vector<string>>ans;
        for(int i=0;i<n;i++)
        {
            if(mergemail[i].size()==0)  continue;
            sort(mergemail[i].begin(), mergemail[i].end());
            vector<string>tmp;
            tmp.push_back(accounts[i][0]);
            for(auto it: mergemail[i])
            {
                tmp.push_back(it);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};