class Solution {
public:
    int ans;
    void solve(int ind, const string& s, set<string>& used, int curr) {
        if (ind == s.size()) 
        {
            ans = max(ans, curr);
            return;
        }
        string temp;
        for (int i = ind; i < s.size(); i++) 
        {
            temp.push_back(s[i]);
            if (used.find(temp) == used.end()) 
            {
                used.insert(temp);
                solve(i + 1, s, used, curr + 1);
                used.erase(temp);  // Backtrack
            }
        }
    }
    int maxUniqueSplit(string s) 
    {
        set<string> used;
        ans= 0;
        solve(0, s, used, 0);
        return ans;
    }
};