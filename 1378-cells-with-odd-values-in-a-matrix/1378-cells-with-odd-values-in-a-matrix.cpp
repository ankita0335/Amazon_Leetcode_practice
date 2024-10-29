class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>mat(m, vector<int>(n,0));
        for(int i=0;i<indices.size();i++)
        {
            int row= indices[i][0];
            int col= indices[i][1];
            for(int j=0;j<n;j++)
            {
                mat[row][j]++;
            }
            for(int r=0;r<m;r++)
            {
                mat[r][col]++;
            }
        }
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]%2!=0)
                    sum++;
            }
        }
        return sum;
    }   
};