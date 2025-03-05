class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n = words.size();
        int c=0;
        for ( int i = 0 ; i < n ; i++)
        {
            string currs = s;
            int f= 0;
            for(int j = 0 ; j < words[i].size() ; j++)
            {
                if( words[i][j] != currs[j])
                {
                    f=1;
                    break;
                }
                
            }
            if( f== 0)  c++;  
        }
        return c;
    }
};