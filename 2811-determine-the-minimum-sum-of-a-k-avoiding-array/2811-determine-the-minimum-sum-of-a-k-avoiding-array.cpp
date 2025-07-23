class Solution {
public:
    int minimumSum(int n, int k) {
        int sum =0;
        int cnt=0;
        unordered_set<int>st;
        for(int i=1;i<100000;i++)
        {
            if(st.find(i)==st.end())
            {
                sum+=i;
                cnt++;
                if(cnt == n)
                {
                    break;
                }
                if(k-i >0)
                {
                    st.insert(k-i);
                }
            }
        }
        return sum;
    }
};