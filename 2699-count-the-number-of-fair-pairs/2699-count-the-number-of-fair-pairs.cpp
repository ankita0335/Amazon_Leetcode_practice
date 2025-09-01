class Solution {
public:
    long long solve(vector<int>&nums, int num){
        int i =0, j = nums.size()-1;
        long long  cnt= 0;
        while(i<j)
        {
            int sum = nums[i]+nums[j];
            if(sum<= num)
            {
                cnt += j-i;
                i++;
            }
            else
                j--;
        }
        return cnt;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long ans = solve(nums,upper) - solve(nums,lower-1);
        return ans;
    }
};