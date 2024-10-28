class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) 
    {
        unordered_map<char, int>mp;
        for(auto i : licensePlate)
        {
            if(isalpha(i))
            {
                i = tolower(i);
                mp[i]++;
            }
        }
        string res;
        int mini = INT_MAX;
        for(string &word: words)
        {
            unordered_map<char, int>curr;
            for(char c: word)
            {
                curr[c]++;
            }
            bool iscomplete= true;
            for(auto &[ch, cnt]: mp)
            {
                if(curr[ch]<cnt)
                {
                    iscomplete = false;
                    break;
                }
            }
//The code compares the count of ch in curr map to the required count cnt from mp map
            if(iscomplete && word.size()<mini)
            {
                res = word;
                mini= word.size();
            }
        }
        return res;
    }
};
