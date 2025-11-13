class Solution {
public:
    double myPow(double x, int n) {
        if(n % 2 ==0)   return pow(double(x*x), n/2);
        else return x* pow(double(x*x), (n-1)/2);
    }
};