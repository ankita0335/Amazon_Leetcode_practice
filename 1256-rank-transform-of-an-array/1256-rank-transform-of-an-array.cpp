class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        if (arr.empty()) return {};
        vector<int>arr2(arr.begin(),arr.end());
        vector<int>ans;
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        mp[arr[0]]=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]!=arr[i-1])
                mp[arr[i]]=mp[arr[i-1]]+1;
            else
                mp[arr[i]]= mp[arr[i-1]];
        }
        for(int i=0;i<arr2.size();i++)
        {
            ans.push_back(mp[arr2[i]]);
        }
        return ans;
    }
};