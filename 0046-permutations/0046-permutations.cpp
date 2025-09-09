class Solution {
public:
    int n;
    vector<vector<int>>res;
    unordered_set<int>st;
    void solve(vector<int>&tmp, vector<int>&nums){
        if(tmp.size() == n){
            res.push_back(tmp);
            return;
        }
        for(int i= 0; i<n; i++)
        {
            if(st.find(nums[i])==st.end())
            {
                tmp.push_back(nums[i]);
                st.insert(nums[i]);
                solve(tmp,nums);
                tmp.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        vector<int>tmp;
        solve(tmp,nums);
        return res;
    }
};