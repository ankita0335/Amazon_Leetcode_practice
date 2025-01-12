class Solution {
public:
    bool canBeValid(string s, string locked) 
    {
        int n = s.length();
        if (n % 2 != 0) 
        {
            return false;
        }
        int openCount = 0;
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == '(' || locked[i] == '0') 
            {
                openCount++;
            } 
            else 
            {
                openCount--;
            }
            if (openCount < 0) 
            {
                return false; 
            }
        }
        int closeCount = 0;
        for (int i = n - 1; i >= 0; i--) 
        {
            if (s[i] == ')' || locked[i] == '0') 
            {
                closeCount++;
            } else 
            {
                closeCount--;
            }
            if (closeCount < 0) 
            {
                return false;
            }
        }
        return true;
    }
};