class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) 
    {
        string res="";
        int n= dictionary.size();
        for(int i=0;i<n;i++)
        {
            int l=0;
            int r=0;
            int m=dictionary[i].size();
            while(l<s.size() && r<m)
            {
                if(s[l]==dictionary[i][r])
                {
                    l++;
                    r++;
                }
                else
                {
                    l++;
                }
            }
            if(r== m)
            {
                if(res.size()<m)
                {
                    res= dictionary[i];
                }
                else if(res.size()== m)
                {
                    res= min(dictionary[i],res);
                }
            }
        }    
        return res;
    }
};