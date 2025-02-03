class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n= nums.size();
        int increment =1;
        int dec=1;
        int ans=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                increment++;
                dec=1;
            }
            else if(nums[i]<nums[i-1])
            {
                dec++;
                increment=1;
            }
            else
            {
                increment = 1;
                dec=1;
            }
            ans= max({ans,dec,increment});
        }
        return ans;
    }
};