class Solution {
public:
    int dp[51][51];
    int solve(int i, int j, vector<int>&values){
        int count = INT_MAX;
        if(j-i+1 <3)    return 0;
        if(dp[i][j] != -1)  return dp[i][j];
        for(int k =i+1; k< j ; k++){
            int wt = values[i]*values[j]*values[k]
                        +solve(i,k,values)+solve(k,j,values);
            count = min(wt,count);
        }
        return dp[i][j]= count;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,n-1,values);
    }
};