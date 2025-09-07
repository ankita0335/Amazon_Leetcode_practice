class Solution {
public:
    int fib(int n) 
    {
        int f[31];
        f[0] = 0, f[1] = 1,f[2]=1;
        if(n==0 )   return 0;
        if(n==1 || n==2)    return 1;
        for(int i=3;i<=n;i++)
        {
            f[i] = f[i-1]+f[i-2];
        }
        return f[n];
    }
};