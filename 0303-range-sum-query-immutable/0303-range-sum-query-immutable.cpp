class NumArray {
public:
    vector<int>pref;
    NumArray(vector<int>& nums) 
    {
        int n= nums.size();
        pref= vector<int>(n+1,0); //Initialize prefix sum array
        for(int i=0;i<n;i++)
        {
            pref[i+1]=nums[i]+pref[i];
        }
    }
    int sumRange(int left, int right) 
    {
        return pref[right+1]-pref[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */