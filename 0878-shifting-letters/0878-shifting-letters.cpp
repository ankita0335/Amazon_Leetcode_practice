class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.length();
        long long total=0;
        for(int i =n-1;i>=0;i--)
        {
            total = (total+shifts[i])%26;
            s[i] = (s[i]-'a'+total)%26+'a';
        }
        return s;
    }
};