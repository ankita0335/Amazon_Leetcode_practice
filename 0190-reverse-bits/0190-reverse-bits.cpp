class Solution {
public:
    int reverseBits(int n) {
        int rev = 0;
        for (int i = 0; i < 32; i++) {
            rev <<= 1;          // (1)
            rev |= (n & 1);     // (2)
            n >>= 1;            // (3)
        }
        return rev;
    }
};
// each left sift means number*2 Wah

//n&1 number ki last digit deta hai ok