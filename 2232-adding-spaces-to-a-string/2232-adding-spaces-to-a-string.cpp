class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int j=0;
        int i;
        for(i=0;i<s.size() && j<spaces.size();i++)
        {
            if(i==spaces[j])
            {
                ans+=' ';
                j++;
            }
            ans+=s[i];
        }    
        for(;i<s.size();i++)
        {
            ans+=s[i];
        }
        return ans;
    }
};