class Solution {
public:
    void dfs(vector<vector<int>>&rooms, int source, vector<bool>&vis)
    {
        vis[source]= true;
        for(auto ele: rooms[source])
        {
            if(!vis[ele])
            {
                dfs(rooms, ele, vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        dfs(rooms, 0, vis);
        for(auto ind: vis)
        {
            if(ind==false)
                return false;
        }
        return true;
    }
};