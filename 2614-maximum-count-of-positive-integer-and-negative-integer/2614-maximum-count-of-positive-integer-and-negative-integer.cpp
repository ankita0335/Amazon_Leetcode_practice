class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int n= nums.size();
        int evn=0, od=0;
        for(auto it: nums)
        {
            if(it >0 )
            {   
                evn++;
            }
            else if(it<0)
                od++;
        }
        return max(evn, od);
    }
};