class Solution {
public:
    long long solve(long long idx, int n , vector<vector<int>>&ques, vector<long long>&dp)
    {
        if(idx >= n)
        {
            return 0;
        }

        if(dp[idx]!= -1)    return dp[idx];
        long long take = solve(idx+ques[idx][1] +1, n, ques, dp) + ques[idx][0];

        long long skip = solve(idx+1 ,  n, ques, dp);
         
        return dp[idx] = max(take, skip);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n+1, -1);
        return solve(0,n, questions, dp);
    }
};