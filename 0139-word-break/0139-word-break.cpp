class Solution {
public:
    int dp[301];
    bool solve(int idx, string s, unordered_set<string>&st)
    {
        int n= s.length();
        if(dp[idx]!= -1)
        {
            return dp[idx];
        }
        if(idx>=n)
        {
            return true;
        }
        if(st.find(s)!=st.end())
        {
            return true;
        }
        for(int len=1;len<=n;len++)
        {
            string tmp= s.substr(idx,len);
            if(st.find(tmp)!= st.end() && solve(idx+len,s, st))
            {
                return dp[idx]=true;
            }
        }
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        int n= s.length();
        unordered_set<string>st;
        for(auto i: wordDict)
        {
            st.insert(i);
        }
        return solve(0,s,st);
    }
};