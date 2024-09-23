class Solution {
public:
    int solve(string &s,unordered_map<string,int>&mp,vector<int>&dp,int i){
        if(i>=s.size())     return 0;
        if(dp[i]!=-1)
            return dp[i];
        string currStr="";
        int res=s.size();
        for(int ci=i;ci<s.size();ci++){
            currStr.push_back(s[ci]);
            int c=((mp.count(currStr)) ? 0: currStr.size())+solve(s,mp,dp,ci+1);
            res=min(res,c);
        }
        return dp[i]=res;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
    vector<int>dp(s.size(),-1);
    unordered_map<string,int>mp;
    for(string & word: dictionary) 
        mp[word]++; 
    int res=solve(s,mp,dp,0);
    return res;
    }
};