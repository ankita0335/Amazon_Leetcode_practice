class Solution {
public:
    int climbStairs(int n1) {
        if(n1<=1) return 1;
        int n=1;
        int m=2;
        for(int i=3;i<=n1;i++){
            int next=n;
            n=m;
            m=n+next;
        }
        return m;
    }
};