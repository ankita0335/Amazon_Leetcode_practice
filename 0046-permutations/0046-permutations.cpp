class Solution {
public:
    void solve(vector<vector<int>>&res, vector<int>&tmp, unordered_set<int>&s,vector<int>&nums)
    {
        if(tmp.size() == nums.size())
        {
            res.push_back(tmp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]) == s.end())
            {
                tmp.push_back(nums[i]);
                s.insert(nums[i]);
                solve(res, tmp, s, nums);
                tmp.pop_back();
                s.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>res;
        vector<int>tmp;
        unordered_set<int>s;
        solve(res, tmp,s, nums);
        return res;    
    }
};