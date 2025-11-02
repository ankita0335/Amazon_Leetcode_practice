class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0)); 
        for (auto &w : walls) grid[w[0]][w[1]] = 1;
        for (auto &g : guards) grid[g[0]][g[1]] = 2;

        for (int i = 0;i < m; i++) {
            bool f = false;
            for (int j =0; j < n; j++) {
                if (grid[i][j] == 1) f = false;
                else if (grid[i][j] == 2) f = true;
                else if (f) grid[i][j] = 3;
            }
        }

        for (int i = 0; i < m; i++) {
            bool f = false;
            for (int j =n - 1; j >= 0; j--) {
                if (grid[i][j] == 1) f = false;
                else if (grid[i][j] == 2) f = true;
                else if (f) grid[i][j] = 3;
            }
        }

        // top to bottom
        for (int j= 0; j < n; j++) {
            bool f = false;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 1) f = false;
                else if (grid[i][j] == 2) f = true;
                else if (f) grid[i][j] = 3;
            }
        }

        // bottom to top
        for (int j =0; j < n; j++) {
            bool seen = false;
            for (int i = m - 1;i >= 0; i--) {
                if (grid[i][j] == 1) seen = false;
                else if (grid[i][j] == 2) seen = true;
                else if (seen) grid[i][j] = 3;
            }
        }

        int ans = 0;
        for (int i = 0; i < m;i++)
            for (int j= 0; j< n; j++)
                if (grid[i][j] == 0) ans++;

        return ans;
    }
};