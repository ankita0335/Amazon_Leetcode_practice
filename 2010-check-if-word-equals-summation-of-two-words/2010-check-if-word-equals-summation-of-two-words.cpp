class Solution {
public:
    int solve(string str)
    {
        int ans = 0;
        for(char ch: str)
        {
            ans = ans*10 + (ch-'a');
        }
        return ans;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return (solve(firstWord) +solve(secondWord) == solve(targetWord));
    }
};