class Solution {
public:
    int dp[101];
    int solve(vector<int>&nums, int i)
    {
        int n= nums.size();
        if(i>=n)
        {
            return 0 ;
        }
        if(dp[i]!=-1)
            return dp[i];
        int steal = nums[i]+solve(nums, i+2);
        int notsteal = solve(nums, i+1);
        return dp[i]= max(steal,notsteal);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans= solve(nums,0);
        return ans;
    }
};