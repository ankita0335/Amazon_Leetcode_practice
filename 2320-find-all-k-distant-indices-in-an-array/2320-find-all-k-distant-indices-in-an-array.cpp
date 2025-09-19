class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int>result;
        for (int i = 0; i<n; i++){
            for (int j = max(0,i-k); j<=min(n-1,i+k); j++) 
            {
                if (nums[j] == key) {
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};