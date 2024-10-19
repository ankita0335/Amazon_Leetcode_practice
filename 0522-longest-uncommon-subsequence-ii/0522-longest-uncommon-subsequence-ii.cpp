class Solution {
public:
    bool issubse(string s1, string s2)
    {
        int i=0, j=0;
        while(i<s1.length() && j<s2.length())
        {
            if(s1[i]== s2[j])
            {
                i++;
            }
            j++;
        }
        return i== s1.length();
    }
    int findLUSlength(vector<string>& strs) {
        int n=strs.size();
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            bool uncmmn= true;
            for(int j=0;j<n;j++)
            {
                if(i!=j && issubse(strs[i],strs[j]))
                {
                    uncmmn= false;
                    break;
                }
            }
            if(uncmmn)    
            {
                ans = max(ans, (int)strs[i].size());
            }
        }
        return ans;
    }
};
/*
The reason for writing (int)strs[i].size() is to explicitly cast the result of strs[i].size() from size_t (an unsigned integer type) to int (a signed integer type).

Return Type of size(): The size() function of a string (or any container in C++) returns a value of type size_t, which is an unsigned integer. This ensures it can represent large sizes, but it can also create issues if you try to compare or assign it directly to an int, which is a signed type*/