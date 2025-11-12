class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>ans(numRows);
        string res="";
        if(numRows == 1)    return s;
        bool f = false;
        int i = 0;
        for(auto ch:s){
            ans[i] += ch;
            if(i==0 || i== numRows-1){
                f= !f;
            }
            if(f)   i++;
            else    i--;
        }
        for(auto i: ans){
            res += i;
        }
        return res;
    }
};