class Solution {
public:
    int countPalindromicSubsequence(string s) 
    {
        unordered_set<char>uniquechar;
        int res=0;
        for(auto ele: s)    //inserting unique chars in set 
        {
            uniquechar.insert(ele);
        }
        for(auto charr: uniquechar) //for each unique element find first and last occurance
        {
            int first=-1, last=-1;
            for(int i=0; i < s.size(); i++)
            {
                if(s[i]==charr)
                {
                    if(first==-1)
                    {
                        first=i;
                    }
                    else    last=i;
                }
            }
            unordered_set<char>characterbtw; //this is used to insert unique chars which are in btw to make a palindrome
            for(int ele= first+1; ele<last; ele++)
            {
                characterbtw.insert(s[ele]);
            }
            res+=characterbtw.size();
        }
        return res;
    }
};