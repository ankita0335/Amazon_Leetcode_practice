class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int>st;
        int i = 0;
        while(i < n){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')' && st.top()== '(' || (s[i] == '}' && st.top() =='{') || (s[i] ==']' && st.top() == '[')){
                st.pop();
            }
            else{
                return false;
            }
            i++;
        }
        return (st.empty() ? true: false );
    }
};