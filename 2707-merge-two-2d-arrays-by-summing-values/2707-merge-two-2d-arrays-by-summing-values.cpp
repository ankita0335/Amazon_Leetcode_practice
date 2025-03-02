class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int, int >mp;
        for (auto& num : nums1) 
        {
            mp[num[0]] += num[1];
        }
        for (auto& num : nums2) 
        {
            mp[num[0]] += num[1]; 
        }
        vector<vector<int>> result;
        for (auto& i : mp) {
            result.push_back({i.first, i.second});
        }
        sort(result.begin(), result.end());
        return result;
    }
};