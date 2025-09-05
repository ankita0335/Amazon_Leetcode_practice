class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int ans = 0;
        while(true){
            long long num = (long long)num1- (long long)ans*num2;
            if(num<0)
            {
                return -1;
            }
            if(__builtin_popcountll(num)<=ans && ans <= num){
                return ans;
            }
            ans++;
        }
        return -1;
    }
};