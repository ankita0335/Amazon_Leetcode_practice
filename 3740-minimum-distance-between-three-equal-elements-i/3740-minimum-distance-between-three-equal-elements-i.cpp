class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int mini =INT_MAX;
        for(int i =0; i < n-2; i++){
            for(int j = i+1; j<n-1;j++){
                for(int k = j+1; k<n; k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k])
                        mini = min(mini, abs(i-j)+abs(j-k) + abs(k-i));
                }
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};