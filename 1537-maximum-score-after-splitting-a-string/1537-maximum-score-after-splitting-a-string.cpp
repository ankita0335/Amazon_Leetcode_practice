class Solution {
public:
    int maxScore(string s) {
        int cntone= count(s.begin(),s.end(),'1');
        int ans =0;
        int cnt0=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            {
                cnt0++;
            }
            else
                cntone--;
            ans= max(ans, cntone+cnt0);
        }
        return ans;
    }
};