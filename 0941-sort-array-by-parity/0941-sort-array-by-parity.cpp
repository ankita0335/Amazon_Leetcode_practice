class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        partition(nums.begin(),nums.end(),[](int n){return n%2==0;});
            return nums;
    }
};