class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        int f=1,f2=1;
        //cout<<s1;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]<s2[i])
            {   
                f=0;
            }
            if(s2[i]<s1[i])
                f2=0;
        }
        return f || f2;
    }
};