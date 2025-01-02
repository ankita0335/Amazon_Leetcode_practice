class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n= words.size();
        unordered_set<char>st={'a','e','i','o','u'};
        vector<int>prefsum(n+1,0);
        for(int i=0;i<words.size();i++)
        {
            int m= words[i].size();
            char first = words[i][0];
            char end= words[i][m-1];
            if(st.find(first)!= st.end() && st.find(end)!= st.end())
            {
                prefsum[i+1] =1+prefsum[i];
            }
            else 
                prefsum[i+1]=prefsum[i];
        }
        vector<int>ans;
        for (auto query : queries) 
        {
            int l = query[0];
            int r = query[1];
            ans.push_back(prefsum[r + 1] - prefsum[l]);
        }
        return ans;
    }
};