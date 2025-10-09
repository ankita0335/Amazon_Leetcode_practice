class Solution {
    public:
        bool isSubsequence(string str1, string str2) 
        {        
            int n = str2.size();
            int i = 0, j = 0;
            int cnt = 0;
            while(j < n ){
                if(str1[i] == str2[j]){
                    i++;
                    j++;
                    cnt++;
                }
                else j++;
            }
            return (cnt == str1.size()) ? true : false;
        }
};