class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        int i=0;
        for(;i<n;i++)
        {
            if(s[i]== '(' || s[i] == '{' || s[i]=='[' )
                st.push(s[i]);
            else if(!st.empty())
            {
                if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='['))                 
                    st.pop();
                else return false;
            }
            else    return false;
        }
        return (!st.empty() ? false : true);
    }
};