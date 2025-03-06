class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> mp;
        vector<int>result(2,-1);
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j< grid[i].size();  j++)
            {
                mp[grid[i][j]]++;
            }
        }
        for (int i = 1; i <= n * n; i++) 
        {
            if (mp[i] == 2) result[0] = i;  
            if (mp[i] == 0) result[1] = i;  
        }
        return result;
    }
};