class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n  = nums.size();
        for(auto i : nums)
        {
            mp[i]++;
        }
        vector<pair<int,int>>vp(mp.begin(),mp.end());
        sort(vp.begin(), vp.end(), [](auto &a, auto &b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i =0;i<k;i++)
        {
            ans.push_back(vp[i].first);
        }
        return ans;
    }
};