class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int,vector<int>>mp;
        int n= nums.size();
        int m= nums[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int>ans;
        for(auto i:mp)
        {
            reverse(i.second.begin(), i.second.end());
            for(int j=0;j<i.second.size();j++)
            {
                ans.push_back(i.second[j]);
            }
        }    
        return ans;
    }
};