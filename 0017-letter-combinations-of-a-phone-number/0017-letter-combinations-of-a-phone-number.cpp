class Solution {
public:
    vector<string>ans;
    void solve(int idx, string &tmp, string digits, unordered_map<char, string>&mp)
    {
        if(idx>=digits.length())
        {
            ans.push_back(tmp);
            return ;
        }
        char ch = digits[idx];
        string str= mp[ch];
        for(int i=0;i<str.length();i++)
        {
            tmp.push_back(str[i]);
            solve(idx+1, tmp, digits, mp);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        if(digits.length()==0)  return {};
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4'] ="ghi";
        mp['5'] ="jkl";
        mp['6'] ="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string tmp= "";
        solve(0,tmp, digits,mp);
        return ans;   
    }
};