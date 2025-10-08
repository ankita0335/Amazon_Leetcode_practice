class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m = matrix[0].size();
        int left =0, top= 0, r = m-1, b= n-1;
        vector<int>ans;
        while(ans.size() < n*m){
            if(left<=r)
            {
                for(int i=left;i <= r; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if(top <= b && ans.size() < n*m){
                for(int i = top; i <= b; i++){
                    ans.push_back(matrix[i][r]);
                }
                r--;
            }
            if(r >= left && ans.size() < n*m){
                for(int i=r ; i >= left; i-- ){
                    ans.push_back(matrix[b][i]);
                }
                b--;
            }
            if(b >= top && ans.size() < n*m ){
                for(int i = b ; i>= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};