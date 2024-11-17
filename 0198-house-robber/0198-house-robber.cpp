class Solution {
public:
    int dp[1001];
    int solve(vector<int>&nums, int idx)
    {
        int n=nums.size();
        if(idx>=n)  return 0;
        if(dp[idx]!=-1) return dp[idx];
        int take= nums[idx]+solve(nums, idx+2);
        int nottake= solve(nums, idx+1);
        return dp[idx]=max(take, nottake);
    }
    int rob(vector<int>& nums) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};