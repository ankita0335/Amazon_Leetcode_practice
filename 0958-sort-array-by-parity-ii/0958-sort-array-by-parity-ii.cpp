class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n =  nums.size();
        vector<int>even;
        vector<int>odd;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
                odd.push_back(nums[i]);
        }
        int i=0;
        while(ans.size()!=n)
        {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
            i++;
        }
        return ans;
    }
};