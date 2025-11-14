class Solution {
public:
    int mySqrt(int x) {
        int l = 1, r= x;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(mid == x/mid)    return mid;
            else if (mid > x/mid)   r = mid -1;
            else l = mid +1;
        }
        return r; //If we can’t find exact sqrt (like x=8,10,15...), binary search stops when so this holds the integer part of square root
    }
};