class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int n= boxes.size();
        vector<int>prefixarr(n,0);
        vector<int>suffixarr(n,0);
        int sum = boxes[0] - '0';
        for(int i = 1; i < n; i++)
        {
            prefixarr[i] = prefixarr[i-1]+sum;
            sum += boxes[i] - '0';
        }
        sum = boxes[n-1]-'0';
        for(int i = n-2; i >= 0 ; i--)
        {
            suffixarr[i] = suffixarr[i+1]+sum;
            sum += boxes[i]-'0';
        }
        vector<int>ans;
        for(int i = 0; i < prefixarr.size(); i++)
        {
            ans.push_back(prefixarr[i]+suffixarr[i]);
        }
        return ans;
    }
};