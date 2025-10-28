class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                int sum1 = accumulate(nums.begin(), nums.begin() + i, 0);
                int sum2 = accumulate(nums.begin() + i + 1, nums.end(), 0);
                if (sum1 == sum2)ans += 2;
                if(sum1-sum2==1)ans+=1;
                if(sum2-sum1==1)ans+=1; 
            }
        }
        return ans;
    }
};