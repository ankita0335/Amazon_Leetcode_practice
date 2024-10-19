class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n= s.length();
        int times;
        string pattern;
        for(int len=n/2 ; len>=1 ;len--)
        {
            if(n%len==0)
            {
                times= n/len;
                pattern= s.substr(0,len);
                string neww= "";
                while(times--)
                {
                    neww+=pattern;
                }
                if(neww==s)
                {
                    return true;
                }
            }        
        }
        return false;
    }
};