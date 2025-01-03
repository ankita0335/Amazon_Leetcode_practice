class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total=0,left=0;
        int ans=0;
        for (int i:nums) 
        {
            total+= i;
        }
        for (int i=0; i<nums.size()-1; i++) 
        {
            left += nums[i];
            if (left >= total-left) 
            {
                ans++;
            }
        }
        return ans;
    }
};