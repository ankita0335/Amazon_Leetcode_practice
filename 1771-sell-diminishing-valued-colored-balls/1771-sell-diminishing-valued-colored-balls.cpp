class Solution {
public:
    int maxProfit(vector<int>& v, int o) 
    {
        int n = v.size();
        long long ans = 0;
        int mod = 1e9 + 7;
        sort(v.begin(), v.end()); 
        for (int i = n-1; i >= 0; i--)   
        {
            long long diff = v[i]-(i>0 ? v[i-1]:0); 
            long long x = min((long long)o,(n-i)*diff); 
            long long r = v[i];
            long long l = r-x/(n-i); 
            ans += (r*(r+1)/2-l*(l+1)/2)*(n-i);
            ans %= mod;
            ans += l * (x % (n - i));
            ans %= mod;
            o -= x; // Reduce remaining orders
            if (o == 0) break;
        }
        return ans;
    }
};
