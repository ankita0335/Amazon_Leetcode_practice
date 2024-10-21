class Solution {
public:
    double ansfun(double x,long n)
    {
        if(n==0)
            return 1;
        if(n<1)
            return ansfun(1/x,-n);
        if(n%2==0)
            return ansfun(x*x,n/2);
        else
            return x*ansfun(x*x,(n-1)/2);
            
    }
    double myPow(double x, int n) {
        return ansfun(x, long(n));
    }
};