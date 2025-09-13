class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int >mp;
        int sum = 0;
        int c =0; //  let sum = 3 and k = 3 then sum - k = 0 that means yes 
        mp[0]=1;
        for(auto num : nums){
            sum += num;
            if(mp.find(sum - k) != mp.end()){
                c += mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};