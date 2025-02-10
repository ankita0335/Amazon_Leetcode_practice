class DisjointSet{
    public:
        vector<int> parent, rank;
        DisjointSet(int n)
        {
            parent.resize(n);
            rank.resize(n,0);
            for(int i=0;i<n;i++)
            {
                parent[i]=i;
            }
        }
        int find(int u)
        {
            if(parent[u]!=u)
            {
                parent[u]=find(parent[u]);
            }
            return parent[u];
        }
        void unionfind1(int u, int v)
        {
            int pu= find(u);
            int pv= find(v);
            if(pu==pv)  return ;
            if(rank[pv]<rank[pu])
            {
                parent[pv]=pu;
            }
            else if(rank[pu]<rank[pv])
            {
                parent[pu]=pv;
            }
            else
            {
                parent[pv]=pu;
                rank[pu]++;
            }
        }
};
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int component=0;
        int n= isConnected.size();
        DisjointSet dsu(n);
        for(int i=0;i<n;i++)
        {
            for(int j= 0 ;j<n;j++)
            {
                if(isConnected[i][j]==1)
                {
                    dsu.unionfind1(i,j);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(dsu.parent[i]==i)
            {
                component++;
            }
        }
        return component;
    }
};