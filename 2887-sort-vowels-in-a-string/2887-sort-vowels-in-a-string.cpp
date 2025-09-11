class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch=='A' || ch =='E' || ch=='I' || ch =='O' || ch=='U'||ch=='a' || ch =='e' || ch=='i' || ch =='o' || ch=='u')    return true;
        return false;
    }
    string sortVowels(string s) {
        int n = s.size();
        string vowel = "";
        for(auto ch:s){
            if(isvowel(ch)){
                vowel+= ch;
            }
        }
        sort(vowel.begin(), vowel.end());
        string ans = "";
        int j =0;
        for(int i = 0; i<n ; i++){
            if(isvowel(s[i]))
            {
                ans += vowel[j];
                j++;
            }
            else    ans+= s[i];
        }
        return ans;
    }
};