class Solution {
public:
    int m, n;
    typedef pair<int, int> P;
    vector<vector<int>> directions{{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        m = mat.size();
        n = mat[0].size();
        queue<P> que;
        vector<vector<int>> dist(m, vector<int>(n, -1));
        for(int i = 0; i<m; i++) 
        {
            for(int j = 0; j<n; j++) 
            {
                if(mat[i][j] == 0) 
                {
                    dist[i][j] = 0;
                    que.push({i, j});
                }
            }
        } 
        auto isSafe = [](int& i, int& j, int& m, int& n) 
        {
            return i>=0 && i<m && j>=0 && j<n;
        };
        while(!que.empty()) 
        {
            P p = que.front();
            que.pop();
            for(auto &dir : directions) {
                int i = p.first  + dir[0];
                int j = p.second + dir[1];
                if(isSafe(i, j, m, n)) 
                {
                    if(dist[i][j] == -1) 
                    {
                        que.push({i, j});
                        dist[i][j] = 1 + dist[p.first][p.second];
                    }
                }
            }   
        }
        return dist;
    }
};