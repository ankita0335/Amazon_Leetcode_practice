class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> pos;
        int ans = 0;
        pos.push_back(0);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] % 2 != nums[i-1] %2) ans++;
            pos.push_back(ans);
        }
        vector<bool> res;
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][1] - queries[i][0] == pos[queries[i][1]]- pos[queries[i][0]])
            {
                res.push_back(true);
            }
            else    res.push_back(false);
        }
        return res;
    }
};