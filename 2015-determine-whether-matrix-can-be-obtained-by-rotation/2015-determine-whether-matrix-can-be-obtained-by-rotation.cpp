class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            int left = 0, r= n-1;
            while(left<r){
                int temp = matrix[i][left];
                matrix[i][left] = matrix[i][r];
                matrix[i][r] = temp;
                left++;
                r--;
            }
        }        //row wise reverse
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0;i<4;i++){
            if(mat== target)    return true;
            rotate(mat);
        }
        return false;
    }
};