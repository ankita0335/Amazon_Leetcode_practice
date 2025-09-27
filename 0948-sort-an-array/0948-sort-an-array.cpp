class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        int mini= *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int idx= 0;
        for(int num = mini; num <= maxi; num++){
            while(mp[num]>0){
                nums[idx]=num;
                idx++;
                mp[num]--;
            }
        }
        return nums;
    }
};


//counting sort genrally tb use hoti hai jb hamein range pta hoti hai numbers ki 