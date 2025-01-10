class Solution {
public:
    bool cnt0in(vector<int>&cnt)
    {
        for(auto ele: cnt)
        {
            if(ele!= 0)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) 
    {
        int n= s.size();
        vector<int>cnt(26,0);
        for(int i=0;i<p.length();i++)
        {
            char ch = p[i];
            cnt[ch-'a']++;
        }
        int i=0,j=0;
        vector<int>ans;
        while(j<n)
        {
            cnt[s[j]-'a']--;
            if(j-i+1 == p.size())
            {
                if(cnt0in(cnt))
                {
                    ans.push_back(i);
                }
                cnt[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};