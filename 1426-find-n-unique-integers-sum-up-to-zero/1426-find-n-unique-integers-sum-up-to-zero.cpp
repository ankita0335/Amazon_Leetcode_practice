class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int i=1;
        while(i<n)
        {
            ans.push_back(i);
            ans.push_back(-i);
            i += 2;
        }
        if(n%2!=0)  ans.push_back(0);
        return ans;
    }
};