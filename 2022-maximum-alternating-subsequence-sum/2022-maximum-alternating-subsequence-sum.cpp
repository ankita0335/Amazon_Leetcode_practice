class Solution {
public:
    long long dp[100001][2];
    long long solve(int i, vector<int>&nums, bool f)
    {
        if(i>=nums.size())    return 0;
        if(dp[i][f]!=-1)   return dp[i][f];
        long long skip = solve(i+1,nums,f);
        long long val= nums[i];
        if(f== false)
            val=-val;
        long long take= val + solve(i+1, nums, !f);
        return dp[i][f]= max(take, skip);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,nums, true);
    }
};