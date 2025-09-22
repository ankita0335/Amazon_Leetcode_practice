class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        int ans=0;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int c=0;
        for(auto i:mp)
        {
            c=max(c,i.second);
        }
        for(auto i:mp)
        {
            if(i.second==c)
            {
                ans+=i.second;
            }
        }
        return ans;
    }
};
