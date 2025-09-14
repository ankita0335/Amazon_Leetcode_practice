class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        vector<int>v(n);
        for(int i = 0; i< n; i++){
            if(nums[i]%2 == 0){
                v[i]= 0;
            }else
                v[i]=1;
        }
        unordered_map<int, int>mp;
        mp[0]=1;
        int sum = 0;
        for(auto num : v){
            sum += num;
            if(mp.find(sum-k) != mp.end()){
                ans += mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};

// this is exactly same as the previous template of subarray sum equals to k ok but we need to modify the array first here ok