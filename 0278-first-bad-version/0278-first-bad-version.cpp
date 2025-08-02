// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int r = n;
        int ans = -1;
        while(left<=r)
        {
            int mid= left+ (r- left)/2;
            if(isBadVersion(mid))
            {
                ans = mid;
                r = mid-1;
            } 
            else
                left = mid+1;
        }
        return ans;
    }
};