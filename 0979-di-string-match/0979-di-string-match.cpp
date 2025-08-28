class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int l=0, h = n;
        vector<int>per;
        int i=0;
        while(i<n)
        {
            if(s[i]=='I')
            {
                per.push_back(l++);
            }
            else per.push_back(h--);
            i++;
        }
        per.push_back(l);
        return per;
    }
};