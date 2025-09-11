class Solution {
public:
    int dp[22][22];
    bool solve(int i , int j , string s, string p)
    {
        if(j==p.length())
        {
            return (i==s.length());
        }
        if(dp[i][j]!= -1)   return dp[i][j];
        bool firstcharmatch = false;
        if(i<s.length() && j<p.length() && (s[i]== p[j] || p[j]=='.') )
            firstcharmatch = true;
        if(j+1< p.length() && p[j+1]   == '*')
        {
            bool nottake = solve(i, j+2, s,p);
            bool take = (firstcharmatch && solve(i+1, j, s, p));
            return dp[i][j] = take || nottake;
        }
        return dp[i][j] =firstcharmatch && solve(i+1, j+1, s,p);
    }
    bool isMatch(string s, string p) {
        memset(dp,-1, sizeof(dp));
        return solve(0,0,s,p);
    }
};
