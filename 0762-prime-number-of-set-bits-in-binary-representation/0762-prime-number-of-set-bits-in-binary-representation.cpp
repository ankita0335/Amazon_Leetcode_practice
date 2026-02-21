class Solution {
public:
    bool isPrimeSetBits(int num){
        int c = 0;
        while(num != 0){
            c += num&1;
            num >>= 1;
        }
        if (c <= 1)
            return false;
        for(int i=2; i*i <=c; i++){
            if(c % i == 0)  return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i = left; i<= right; i++){
            if(isPrimeSetBits(i)){
                cnt++;
            }
        }
        return cnt;
    }
};