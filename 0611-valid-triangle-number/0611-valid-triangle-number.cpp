class Solution {
public:
    int bs(int l, int h, int target, vector<int>&nums)
    {
        int k = -1;
        while(l<=h){
            int mid =l+ (h-l)/2;
            if(nums[mid]<target){
                l=mid+1;
                k= mid;
            }
            else h= mid-1;
        }
        return k;
    }
    int triangleNumber(vector<int>& nums) {
        int n= nums.size();
        int c= 0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++)
        {
            for(int j =i+1;j<n-1;j++){
               int k =  bs(j+1, n-1, nums[i]+nums[j],nums);
            if(k!=-1)   c+= k-j;
            }
        }
        return c;
    }
};