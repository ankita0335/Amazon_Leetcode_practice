class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>arr(n+1,0);
        for(auto q: queries)
        {
            int l= q[0];
            int r= q[1];
            arr[l]++;
            if(r+1<n)   
                arr[r+1]--;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=arr[i];
            nums[i]-=c;
            if(nums[i]>0)   return false;
        }
        return true;
    }
};