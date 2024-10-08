class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;

        for(auto i: s)
        {
            if(i=='[')
            {
                st.push(i);
            }
            else if(!st.empty() && st.top() == '[' )
            {
                st.pop();
            }
            else
                st.push(i);
        }
        int val = st.size()/2;
        return ceil(val/2.0);
    }
};