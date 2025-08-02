class Solution {
public:
    int climbStairs(int n1) {
        if(n1<=1) return 1;
        if(n1==2)   return 2;
        int n=1;
        int m=2;
        int ans=0;
        for(int i=3;i<=n1;i++)
        {
            ans = m+n;
            n=m;
            m=ans;
        }
        return ans;
    }
};