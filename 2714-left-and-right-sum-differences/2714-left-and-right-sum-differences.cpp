class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum(n,0);
        vector<int>rsum(n,0);
        
        for(int i=1; i< n ;i++)
        {
            leftsum[i] = leftsum[i-1] + nums[i-1]; 
        }
        for(int i = n-2; i >=0 ; i--)
        {
            rsum[i] = rsum[i+1]+nums[i+1];
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            //cout<<leftsum[i]<<" "<<rsum[i]<<endl;
            ans.push_back(abs(leftsum[i]-rsum[i]));
        }
        return ans;
    }
};