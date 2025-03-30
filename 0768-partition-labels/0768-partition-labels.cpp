class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        vector<int>res;
        int n = s.size();

        for(int i = 0 ; i < n ; i++)
        {
            char c = s[i];
            mp[c]= i;
        }

        int prev=-1;
        int lasti = 0;

        for(int i = 0 ; i < n ; i++)
        {
            lasti = max(lasti, mp[s[i]]);
            if(lasti == i)
            {
                res.push_back(lasti- prev);
                prev = lasti;
            }
        }
        return res;
    }
};