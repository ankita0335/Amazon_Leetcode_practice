class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)    return {};
        vector<vector<int>>ans;
        int n =nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < n-2; i++)
        {
            if(i!= 0 && nums[i] == nums[i-1])   continue;

            int j = i+1, k= n-1;
            
            while(j<k){
                long long sum = nums[k]+nums[j];
                if(sum == -nums[i]){
                    ans.push_back({nums[i],nums[j], nums[k]});
                    j++; k--;
                    while(j<k && nums[j]== nums[j-1])   j++;
                    while(j<k && nums[k] == nums[k+1])  k--;
                }
                else if(sum < -nums[i]) j++;
                else    k--;
            }
        }
        return ans;
    }
};
