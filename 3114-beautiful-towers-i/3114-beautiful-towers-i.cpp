class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) 
    {
        long long ans = 0;
        int n = maxHeights.size();
        for (int i = 0; i < n;i++) 
        {
            vector<int> v(n);
            v[i] = maxHeights[i];
            for (int j=i-1;j>=0;j--) 
            {
                v[j] = min(maxHeights[j], v[j+1]);
            }
            for (int j = i+1;j<n;j++) 
            {
                v[j] = min(maxHeights[j], v[j-1]);
            }
            long long sum= accumulate(v.begin(), v.end(), 0LL);
            ans= max(ans,sum);
        }
        return ans;
    }
};