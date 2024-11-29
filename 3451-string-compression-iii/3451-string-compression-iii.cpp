class Solution {
public:
    string compressedString(string word) {
        int n= word.size();
        string str="";
        for(int i=0;i<n;)
        {
            char ch= word[i];
            int c=0;
            while(i<n && word[i]==ch && c<9)
            {
                c++;
                i++;
            }
            str += to_string(c)+ch;
        }
        return str;
    }
};