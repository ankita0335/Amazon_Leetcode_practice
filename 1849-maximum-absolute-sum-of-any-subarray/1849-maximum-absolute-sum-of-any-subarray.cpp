class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int mini = nums[0];
        int currmax = nums[0];
        int currmin = nums[0];
        for(int i =1 ; i < n ; i++){
            currmax = max(nums[i], currmax+ nums[i]);
            currmin = min(nums[i], currmin+ nums[i]);
            maxi = max(maxi, currmax);
            mini = min(mini, currmin);
        }
        return max(abs(maxi), abs(mini));
    }
};