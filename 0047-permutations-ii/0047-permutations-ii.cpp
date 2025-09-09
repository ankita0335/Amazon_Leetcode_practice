class Solution {
public:
    vector<vector<int>>ans;
    int n;
    void solve(unordered_map<int,int>&mp, vector<int>&tmp)
    {
        if(tmp.size()== n){
            ans.push_back(tmp);
            return ;
        }
        for(auto &[num,count] : mp)
        {
            if(count==0)
            {
                continue;
            }
            //do something bro
            tmp.push_back(num);
            mp[num]--;
            //explore
            solve(mp,tmp);
            //undoo 
            tmp.pop_back();
            mp[num]++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>tmp;
        n= nums.size();
        unordered_map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        solve(mp,tmp);
        return ans;
    }
};