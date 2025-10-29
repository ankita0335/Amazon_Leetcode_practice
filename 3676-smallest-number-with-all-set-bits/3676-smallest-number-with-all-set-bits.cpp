class Solution {
public:
    int smallestNumber(int n) {
        int ans = 1;
        int power = 1;
        while(ans < n) {
            ans = ans + pow(2, power);
            power++; 
        }
        return ans;
    }
};