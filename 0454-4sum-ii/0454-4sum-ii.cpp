class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<long long , int>mp; // long long isliye qki 2 integer ko add krna hai to integer ki range k bahr bhi value aa skti hai ok
        int c= 0;
        
        for(int i=0; i<nums1.size(); i++){
            for(int j = 0;j< nums2.size();j++){
                long long sum = (long long )nums1[i] + nums2[j];
                mp[sum]++;
            }
        }
        int n= nums3.size();
        for(int i=0;i < n; i++){
            for(int j =0; j<n; j++){
                long long sum = nums3[i]+ nums4[j];
                if(mp.find(-sum)!= mp.end())
                    c += mp[-sum];
            }
        }
        return c;
    }
};