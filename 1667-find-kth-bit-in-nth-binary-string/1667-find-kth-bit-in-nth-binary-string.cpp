class Solution {
public:
    string invertkro(string s)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }
            else
                s[i]='0';
        }
        return s;
    }
    string reverse(string s)
    {
        int n = s.length(); 
        for (int i=0; i<n/2; i++) 
        {
            swap(s[i], s[n-1-i]); 
        }
        return s; 
    }
    char findKthBit(int n, int k) 
    {
        string s = "0";
        for(int i=1;i<n;i++)
        {
            s += '1'+reverse(invertkro(s));
        }
        //cout<<s<<endl;
        for(int i=0;i<k;i++)
        {
            if(i==k-1)    
                return s[i];
        }
        return {};
    }
};