class Solution {
public:
    bool isnonzero(int num){
        if(num== 0) 
            return false;
        while(num>0) {
            if(num % 10 == 0) return false; // check every digit
            num /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int i=1, j=n-1;
        vector<int>ans;
        while(i<=j){
            if(isnonzero(i) && isnonzero(j) && i+j==n){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            else{
                i++;j--;
            }
        }
        return ans;
    }
};