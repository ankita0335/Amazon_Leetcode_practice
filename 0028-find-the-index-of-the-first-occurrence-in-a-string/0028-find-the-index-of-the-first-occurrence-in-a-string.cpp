class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        
        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j< needle.length(); j++){
                if(haystack[i+j]  != needle[j]){
                    break;
                }
                if(j == needle.length()-1)  return i;
            }
        }
        return -1;
    }
};