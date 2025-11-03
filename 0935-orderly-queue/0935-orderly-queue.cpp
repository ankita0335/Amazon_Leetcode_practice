class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        if(k>1){
            sort(s.begin(), s.end());
            return s;
        }
        string res = s;
        for(int i=1;i<s.length(); i++){
            string tmp = s.substr(i)+s.substr(0,i); //used to rotate the string
            res = min(res,tmp);
        }
        return res;
    }
};
/*
s.substr(i) → substring from index i to end
s.substr(0, i) → first i characters
s.substr(i) + s.substr(0, i) → rotates the string (moves front part to end) */