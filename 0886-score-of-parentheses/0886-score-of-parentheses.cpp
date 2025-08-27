class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<int>st;
        st.push(0);
        for(char ch: s)
        {
            if(ch=='(')
                st.push(0);
            else
            {
                int v = st.top();
                st.pop();
                st.top() += max(2*v,1); // agr phle wala yani ki jo 'v' hai vo 0 nhi hai iska mean ki vo sinlge paranthesis hai otherwise not
            }
        }
        return st.top();
    }
};


/*Step 1: “I noticed the problem is about nested structure of parentheses.”

Step 2: “I thought of using a stack to keep track of the score at each layer.”

Step 3: “For each '(', push 0 to start a new layer; for each ')', pop the top layer score, calculate max(2*v,1) and add it to the previous layer.”

Step 4: “This ensures both single pairs () and nested pairs (A) are correctly scored, and consecutive layers are summed automatically.”

Step 5: “This is simpler and safer than trying to multiply/add globally or using boolean flags for previous pair, which can fail in nested cases.” */