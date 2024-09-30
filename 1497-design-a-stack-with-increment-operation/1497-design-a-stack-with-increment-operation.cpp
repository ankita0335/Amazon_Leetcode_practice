class CustomStack 
{
public:
    vector<int> st;
    vector<int> arr;
    int n;
    CustomStack(int maxi) 
    {
        n = maxi;
    }
    void push(int x) 
    {
        if(st.size() < n) 
        {
            st.push_back(x);
            arr.push_back(0);
        }
    } 
    int pop()
    {
        if(st.size() == 0) 
        {
            return -1;
        }
        int idx = st.size()-1; 
        if(idx > 0) 
        {
            arr[idx-1] += arr[idx];
        }
        int top_val = st[idx] + arr[idx];
        st.pop_back();
        arr.pop_back();   
        return top_val;
    }
    void increment(int k, int val) 
    {
        int idx = min(k, (int)st.size()) - 1;
        if (idx >= 0) {
            arr[idx] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */