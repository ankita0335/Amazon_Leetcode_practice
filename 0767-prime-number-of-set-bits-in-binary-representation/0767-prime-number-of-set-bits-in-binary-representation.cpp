class Solution {
public:
    bool isprime(int c)
    {
        if(c<=1)    return false;
        if(c==2)    return true;
        for(int i=2;i*i<=c;i++)
        {
            if(c%i==0)  return false;
        }
        return true;
    }
    int tobinry(int number)
    {
        int res=0;
        while(number>0)
        {
            res += number%2;
            number/=2;
        }
        return res;
    }
    int countPrimeSetBits(int left, int right) 
    {
        int cnt=0;
        for(int i=left;i<= right;i++)
        {
            int c=0;
            int num = tobinry(i);
            if(isprime(num))
            {
                cnt++;
            }
        }
        return cnt;
    }
};