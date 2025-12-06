class Solution {
public:
    int n ;
    int dp[1001];
    int solve(vector<int>& nums, int i , int n){
        if(i > n)    return 0;
        if(dp[i] != -1) return dp[i];
        int take = nums[i] + solve(nums, i+2, n);
        int skip = solve(nums, i+1, n);
        return dp[i] = max(take, skip);
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        memset(dp,-1, sizeof(dp));
        if(n == 0 ) return 0;
        if(n==1)    return nums[0];
        int takefrom0 = solve(nums, 0, n-2);
        memset(dp,-1, sizeof(dp));
        int takefrom1 = solve(nums, 1, n-1);
        return max(takefrom0, takefrom1);
    }
};