class Solution {
public:
    string reverseWords(string input) {
        int n = input.size();
        string ans ;
        for(int i = 0; i<n; i++){ 
            if(input[i] == ' ') continue;  //condition for multiple spaces and for last and first one too
            string curr;
            while(i < n && input[i] != ' ' ){
                curr += input[i];
                i++;
            }
            if(ans.size()>0) ans = curr + ' ' +ans;
            else ans = curr;
        }
        return ans;
    }
};

/*' ' is a character literal representing a space character.
" " is a string literal, which is an array 
of characters terminated by a null character \0.
*/