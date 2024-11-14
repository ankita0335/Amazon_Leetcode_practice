class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n= wall.size();
        vector<vector<int>>pre;
        for(int i=0;i<n;i++)
        {
            vector<int>sum(wall[i].size(),0);
            sum[0]=wall[i][0];
            for(int j=1;j<wall[i].size();j++)
            {
                sum[j]=sum[j-1]+wall[i][j];
            }
            pre.push_back(sum);
        }
        unordered_map<int,int>count;
        int maxi=0;
        for(int i=0;i<pre.size();i++)
        {
            for(int j=0;j<pre[i].size()-1;j++)
            {
                count[pre[i][j]]++;
                maxi=max(maxi,count[pre[i][j]]);
            }
        }
        return n-maxi;
    }
};