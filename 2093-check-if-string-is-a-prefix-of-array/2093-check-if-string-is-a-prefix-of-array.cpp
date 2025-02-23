class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = words.size();
        string str = "";
        for(int i = 0 ; i < n ; i++)
        {
            str += words[i];
            if(str == s)    return true;
        }
        return false;
        // for(int i = 0 ; i < s.size() ; i++)
        // {
        //     if(str[i] != s[i])
        //     {
        //         return false;
        //     }
        // }
        // return true;
    }
};