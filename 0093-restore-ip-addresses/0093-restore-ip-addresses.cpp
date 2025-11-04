class Solution {
public:
    vector<string>res;
    int n ;
    bool isvalid(string temp){
        if(temp[0]=='0')    return false;
        if(stoi(temp)>255 || stoi(temp)<0)  return false;
        return true;
    }
    void solve(string &s, int idx, int parts, string curr){
        if(idx == n && parts == 4){
            curr.pop_back();
            res.push_back(curr);
        }
        if(idx+1 <= n )
            solve(s, idx+1, parts+1, curr+s.substr(idx,1)+".");

        if(idx+2 <= n && isvalid(s.substr(idx,2)))
            solve(s,idx+2, parts+1, curr+s.substr(idx,2)+".");

        if(idx+3 <= n && isvalid(s.substr(idx,3)))
            solve(s,idx+3, parts+1, curr+s.substr(idx,3)+".");

    }
    vector<string> restoreIpAddresses(string s) {
        string curr = "";
        n = s.length();
        if(n>12)    return {}; //possible hai hi nhi to kaise hoga 4 hi parts honge but 12 se jyada ki string mai 4 se jyada parts ho jayenge na 
        int parts=0;
        solve(s, 0 , parts, curr);
        return res;    
    }
};