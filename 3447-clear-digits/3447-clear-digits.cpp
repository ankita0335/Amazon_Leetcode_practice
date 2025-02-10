class Solution {
public:
    string clearDigits(string s) 
    {
        int n= s.length();
        int i=0;
        while(i<n)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                s.erase(s.begin()+i);
                if(i>0)
                {
                    s.erase(s.begin()+(i-1));
                    i--;
                }
            }
            else
                i++;
        }
        return s;
    }
};