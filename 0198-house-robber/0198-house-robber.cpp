class Solution {
public:
    int dp[1000001];
    int solve(vector<int>&nums,int i)
    {
        int n=nums.size();
        if(i>=n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int take=nums[i]+solve(nums,i+2);
        int notTake=solve(nums,i+1);
        return dp[i]=max(take,notTake);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};