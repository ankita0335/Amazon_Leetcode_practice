class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int n= deliciousness.size();
        vector<int>power;
        for(int i=0;i<=21;i++)
        {
            int val= 1<<i;
            power.push_back(val);
        }
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int val= 0;val<power.size();val++)
            {
                if(mp.find(power[val]-deliciousness[i])!=mp.end())
                {
                    ans += mp[power[val]-deliciousness[i]];
                    ans = ans%1000000007;
                }
            }
            mp[deliciousness[i]]++;
        }
        return ans%1000000007;
    }
};