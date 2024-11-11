class Solution {
public:
    int minimumTotal(vector<vector<int>>& traingle) {
        int n=traingle.size();
        vector<vector<int>>ans(n,vector<int>(n,0));
        ans[0][0]=traingle[0][0];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                {
                    ans[i][j]=traingle[i][j]+ans[i-1][j];
                }
                else if(i==j)
                {
                    ans[i][j]=ans[i-1][j-1]+traingle[i][j];
                }
                else 
                {
                    ans[i][j]=traingle[i][j]+min(ans[i-1][j-1],ans[i-1][j]);
                }
            }
        }
        int mini=*min_element(ans[n-1].begin(),ans[n-1].end());
        return mini;
    }
};