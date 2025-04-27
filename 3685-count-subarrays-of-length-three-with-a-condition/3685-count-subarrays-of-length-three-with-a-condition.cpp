class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int i=0, j= i+2;
        int ans = 0;
        while(j<n)
        {
            if((nums[i]+nums[j])*2 == nums[i+1])
                ans++;
            i++;
            j++;
        }
        return ans;
    }
};