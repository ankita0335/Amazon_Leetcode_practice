class Solution {
public:
    int n;
    int res=INT_MAX;
    void solve(vector<int>&cookies, int k , int i, vector<int>&child)
    {
        if(i >= n)
        {
            int unfaircookie =  *max_element(child.begin(), child.end());
            res = min(res, unfaircookie);
            return;
        }
        for(int j=0;j<k;j++)
        {
            child[j] += cookies[i];
            solve(cookies, k, i+1, child);
            child[j] -= cookies[i];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        n= cookies.size();
        vector<int>child(k);
        solve(cookies, k, 0, child);
        return res;
    }
};