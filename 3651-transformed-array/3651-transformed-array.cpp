class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for (int i = 0; i<n; i++)
        {
            int j = i;
            if (nums[i] > 0)
            {
                j = (i + nums[i])%n;
            }
            else if (nums[i] < 0)
            {
                j = (n+(i+nums[i])%n)%n;
            }
            res[i] = nums[j];
        }
        return res;
    }
};