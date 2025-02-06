class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> productFreq;
        int n = nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                productFreq[nums[i]*nums[j]]++;
            }
        }
        for(auto it:productFreq){
            int cnt = it.second;
            c += (cnt*(cnt-1)/2);
        }
        return c*8;
    }
};
