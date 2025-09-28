class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums, vector<int>&curr, unordered_map<int,int>&mp ){
        int n= nums.size();
        if(curr.size()== n) {
            ans.push_back(curr);
            return;
        }

        for( auto [num, count]: mp){
            if(count == 0)    continue;
            curr.push_back(num);
            mp[num]--;
            solve(nums, curr, mp);
            curr.pop_back();
            mp[num]++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>curr;
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        solve(nums,curr,mp);
        return ans;
    }
};