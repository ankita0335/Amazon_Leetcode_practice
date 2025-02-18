class NumArray {
public:
    int n ;
    vector<int>segment;
    void updateq(int idx, int val, int i, int l, int r)
    {
        if(l == r)
        {
            segment[i] = val;
            return ;
        }
        int mid = (l+r)/2;
        if(idx <= mid)
            updateq(idx, val, 2*i+1, l, mid);
        else 
            updateq(idx, val , 2*i+2, mid+1, r);
        segment[i] = segment[2*i+1]+ segment[2*i+2];
    }

    int find( int idx, int l , int r, int left, int right)
    {
        if(l>= left && r<= right)
        {
            return segment[idx];
        }
        if(left> r || right < l )   return 0;

        int mid = (l+r)/2;
        int lvalue = find( 2*idx+1, l , mid, left, right);
        int rvalue = find(2*idx+2, mid+1, r, left , right);
        return lvalue + rvalue;
    }
    void create( vector<int>&nums, int idx, int l , int r)
    {
        if(l==r)
        {
            segment[idx] = nums[l];
            return ;
        }
        int mid = (l+r)/2;
        create(nums, 2*idx+1, l , mid);
        create(nums, 2*idx+2, mid+1, r);
        segment[idx]= segment[2*idx+1] + segment[2*idx+2];
    }
    NumArray(vector<int>& nums) 
    {
        n= nums.size();
        segment.resize(4*n);
        create(nums,0, 0, n-1 );
    }
    
    void update(int index, int val) {
        updateq(index, val, 0 , 0 , n-1);
    }
    
    int sumRange(int left, int right) {
        return find ( 0, 0 , n-1, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */