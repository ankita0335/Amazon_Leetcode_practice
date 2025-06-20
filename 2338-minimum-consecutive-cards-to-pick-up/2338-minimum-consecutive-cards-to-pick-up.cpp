class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n = cards.size();
        unordered_map<int,int>mp;
        int ans = INT_MAX;
        for(int i=0 ; i < n ; i++)
        {
            if(mp.find(cards[i]) != mp.end())
            {
                ans = min(ans, i-mp[cards[i]]+1);
            }
            mp[cards[i]] = i;
        }
        return (ans ==INT_MAX) ? -1 : ans;
    }
};