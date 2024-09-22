class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmx=0;
        int rmx=0;
        int idx=0;
        int ans=0;
        int lmaxi= height[0];
        for(int i=0;i<n;i++)
        {
            if(height[i]> lmaxi)
            {
                lmaxi= height[i];
                idx = i;
            }
        }
        for(int i=0;i<idx;i++)
        {
            if(lmx> height[i])
            {
                ans+= lmx- height[i];
            }
            else
            {
                lmx= height[i];
            }
        }
        // for right side
        for(int i=n-1;i>idx;i--)
        {
            if(rmx > height[i])
            {
                ans+= rmx- height[i];
            }
            else 
                rmx= height[i];
        }
        return ans;
    }
};