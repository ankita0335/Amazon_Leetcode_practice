class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int rem = 0;
        int sum = 0;
        int ans = 0;
        unordered_map<int,int>mp; //[rem, count]
        mp[0] = 1;
        for(int i=0; i<n; i++){
            sum += nums[i];
            rem = sum%k;
            if(rem < 0){
                rem += k;
            }
            if(mp.find(rem) != mp.end()){
                ans += mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};