class Solution {
public:
    bool checkRecord(string s) 
    {
        int c2 = 0, c1 = 0;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'A')
            {
                c1++;
                if (c1 >= 2) 
                    return false; 
                c2 = 0;  
            }
            else if(s[i] == 'L')
            {
                c2++;
                if (c2 >= 3) 
                    return false;  
            }
            else
            {
                c2 = 0; 
            }
        }
        return true; 
    }
};
