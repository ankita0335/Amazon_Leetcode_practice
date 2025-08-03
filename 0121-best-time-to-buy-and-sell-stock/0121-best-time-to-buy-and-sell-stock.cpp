class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  n = prices.size();
        int maxi  = INT_MIN;
        int mini =INT_MAX;
        for(int i =0 ;i<n;i++)
        {
            mini = min(prices[i],mini);
            maxi= max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};