class NumArray {
public:
    vector<int>arr;
    vector<int>pre;
    int len;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        len=sqrt(n)+1;
        pre.resize(len);
        arr= nums;
        for(int i=0;i<n;i++)
        {
            pre[i/len] +=nums[i];
        }
    }
    
    void update(int index, int val) {
        int block = index / len; 
        pre[block] -= arr[index];
        pre[block] += val; 
        arr[index]= val; 
    }
    int sumRange(int left, int right) {
    int sum=0;
        for(int i=left;i<=right;)
        {
            if(i%len==0 && i+len-1<=right)
            {
                sum+=pre[i/len];
                i+=len;
            }
            else
            {
                sum+=arr[i];
                i++;
            }
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */