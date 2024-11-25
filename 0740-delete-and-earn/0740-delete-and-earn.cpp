class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int inc=0, exc=0;
        long long count[100001]={};
        for(auto ele: nums)
        {
            count[ele]++;
        } 
        for(int i=0;i<=100000;i++)
        {
            long long ni= exc+count[i]*(long long)i;
            int ne= max(inc, exc);
            inc= ni;
            exc= ne;
        }
        return max(inc, exc);
    }
};