class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n=sentence.size();
        int ans=1;
        int i=0;
        while(i<n)
        {
            string str="";
            while (sentence[i]!=' ' && i<n)
            {
                str += sentence[i];
                cout<<str;
                if(str==searchWord)
                    return ans;
                i++;
            }
            i++;
            ans++;
        }
        return -1;
    }
};