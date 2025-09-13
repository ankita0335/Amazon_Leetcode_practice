class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='A' || c== 'E' || c== 'I' || c== 'O' || c == 'U'||c=='a' || c== 'e' || c== 'i' || c== 'o' || c == 'u')    return true;
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        int maxv = 0;
        int maxc = 0;
        for(auto i: s)
        {
            mp[i]++;
        }
        for(auto frq : mp)
        {
            if(isVowel(frq.first))
            {
                maxv = max(frq.second, maxv);
            }
            else
            {
                maxc = max(frq.second,maxc);
            }
        }
        return maxc+maxv;
    }
};