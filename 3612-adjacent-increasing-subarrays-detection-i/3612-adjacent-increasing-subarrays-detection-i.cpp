class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int prev=1,curr=1;
        for(int i=1;i<n;i++) 
        {
            if(nums[i]>nums[i-1]) 
            {
                curr++;
            }
            if(curr>=k && prev>=k) 
                return true;
            if(curr>=2*k) 
                return true;
            if(nums[i]<=nums[i-1]) 
            {
                prev = curr;
                curr = 1;
            }
        }
        return false;
    }
};