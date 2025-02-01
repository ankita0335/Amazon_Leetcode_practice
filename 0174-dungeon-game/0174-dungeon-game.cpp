class Solution {
public:
    int pre(int i,int j,int n,int m,vector<vector<int>>& arr,vector<vector<int>> &dp)
    {
        if(i >= n+1 or j >= m+1) return 1e9;
        if(i == n and j == m) return arr[i][j] > 0 ? 1 : 1 - arr[i][j];
        if(dp[i][j] != -1) return dp[i][j];  
        int down = pre(i+1,j,n,m,arr,dp);
        int right = pre(i,j+1,n,m,arr,dp);
        int res = min(down,right)-arr[i][j];
        return dp[i][j] = res > 0 ? res : 1;
    }
    int calculateMinimumHP(vector<vector<int>>& arr) 
    {
        int n = arr.size(), m = arr[0].size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        return pre(0,0,n-1,m-1,arr,dp);
    }
};