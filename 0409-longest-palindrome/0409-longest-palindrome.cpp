class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int>mp;
        int res =0;
        int n = s.size();
        for(auto i: s)
        {
            mp[i]++;
        }
        bool oddfrq = false;
        for(auto i:mp)
        {
            if(i.second%2==0)   
                res += i.second;
            else
            {
                res += i.second-1;
                oddfrq =true;
            }
        }
        if(oddfrq)  res++;
        return res;
    }
};