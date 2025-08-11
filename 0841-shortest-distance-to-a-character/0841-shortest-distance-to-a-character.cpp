class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int  n  = s.size();
        vector<int>str;
        vector<int>ans;
        for(int i =0;i<n;i++)
        {
            if(s[i] == c)
            {
                str.push_back(i);
            }
        }
        for(int i = 0;i<n;i++)
        {
            int mini = INT_MAX;
            for(int j=0;j<str.size();j++)
            {
                if(abs(str[j]-i)<mini)
                {
                    mini = abs(str[j]-i);
                }
            }
            ans.push_back(mini);
        }
        return ans;
    }
};