class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n= nums.size();
        vector<int>ans(n);

        int idx = 0;
        for(auto i: nums)
        {
            if(i < pivot)
            {
                ans[idx] = i;
                idx++;
            }
        }
        for(auto i: nums)
        {
            if(i == pivot)
            {
                ans[idx] = i;
                idx++;
            }
        }
        for(auto i: nums)
        {
            if(i > pivot)
            {
                ans[idx] = i;
                idx++;
            }
        }
        return ans;
    }
};