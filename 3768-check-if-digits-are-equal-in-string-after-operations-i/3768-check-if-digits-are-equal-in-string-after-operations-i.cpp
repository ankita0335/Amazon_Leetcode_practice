class Solution {
public:
    bool hasSameDigits(string s) {
        string ans;
        while(s.length() > 2){
            ans ="";
            for(int i = 1; i<s.length(); i++){
                char sum = s[i]+s[i-1];
                char curr = sum%10;
                ans += curr;
            }
            s = ans;
        }
        return ans[0]==ans[1] ? true: false;
    }
};