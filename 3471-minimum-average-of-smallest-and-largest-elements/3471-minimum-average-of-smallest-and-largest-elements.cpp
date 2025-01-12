class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j= n-1;
        double mini = INT_MAX;
        while(i<j)
        {
            int a = nums[i];
            int b= nums[j];
            mini = min(double(a+b)/2.0 , mini);
            i++;
            j--;
        }
        return mini;
    }
};