class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i =0, idx = 0;
        while(i<n){
            int cnt=0;
            char currchar = chars[i];
            while(i<n && chars[i]== currchar){
                i++;
                cnt++;
            }
            chars[idx]= currchar;
            idx++;
            if(cnt > 1){
                string count = to_string(cnt);
                for(auto s : count){
                    chars[idx] = s;
                    idx++;
                }
            }
        }
        return idx;
    }
};