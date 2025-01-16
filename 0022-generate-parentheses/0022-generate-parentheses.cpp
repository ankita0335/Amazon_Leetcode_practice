class Solution {
public:
    vector<string>res;
    bool isvalid(string &curr)
    {
        int c=0;
        for(char &ch : curr)
        {
            if(ch == '(')
            {
                c++;
            }
            else
                c--;
            if(c<0)
            {
                return false;
            }
        }
        return c==0;
    }
    void solve(string &curr, int n)
    {
        if(curr.length() == 2*n)
        {
            if(isvalid(curr))
            {
                res.push_back(curr);
            }
            return ;
        }
        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr, n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) 
    {
        string curr ="";
        solve(curr, n);
        return res;
    }
};