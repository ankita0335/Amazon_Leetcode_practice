class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        long long ans = 0;
        const int MOD = 1e9 + 7;
        for(int i= 0;i<n;i++){
            int idx = queries[i][0];
            while(idx <= queries[i][1]){
                nums[idx] = (1LL*nums[idx] * queries[i][3]) % MOD;
                idx += queries[i][2];
            }
        }
        for(int i =0;i<nums.size(); i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};