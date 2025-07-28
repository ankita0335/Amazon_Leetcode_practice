class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int num=n;
        while(num!=0)
        {
            int rem = num%10;
            sum +=rem;
            num/=10;
        } 
        int pro=1;
        num=n;
        while(num!=0)
        {
            int rem = num%10;
            pro *=rem;
            num/=10;
        } 
        return  n%(sum+pro) == 0 ? true : false;
    }
};