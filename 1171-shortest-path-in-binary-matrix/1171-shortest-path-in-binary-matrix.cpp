class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int n= grid.size();
        queue<pair<int, pair<int,int>>>q;
        if(grid[0][0]==1)
            return -1;
        int dr[]= {-1,-1,-1,0,0,1,1,1};
        int dc[]= {-1,0,1,-1,1,-1,0,1};
        q.push({1,{0,0}});
        grid[0][0]=1;
        while(!q.empty())
        {
            int size= q.size();
            while(size--)
            {
                auto tmp= q.front();
                q.pop();
                int dis= tmp.first;
                int r= tmp.second.first;
                int c= tmp.second.second;
                if(r==n-1 && c==n-1)    return dis;
                for(int i=0;i<8;i++)
                {
                    int nr= dr[i]+r;
                    int nc= dc[i]+c;
                    if(nr>=0 && nr<n && nc>=0&& nc<n && grid[nr][nc]==0)
                    {
                        q.push({dis+1,{nr,nc}});
                        grid[nr][nc]=1;
                    }
                }
            }
        }        
        return -1;
    }
};