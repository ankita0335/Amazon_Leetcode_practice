// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        while(isBadVersion(n))   n--;
        return n+1;
    }
};