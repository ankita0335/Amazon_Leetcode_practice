class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n, 0);
        for (vector<int> v : shifts) {
            int start = v[0];  //L
            int end = v[1];    //R
            int dir = v[2];
            int x;
            x = (dir == 1) ? 1 : -1;
            diff[start] += x;
            if (end + 1 < n) {
                diff[end + 1] -= x;
            }
        }
        for (int i = 1; i < n; i++) {
            diff[i] = diff[i] + diff[i - 1];
        }
        int shift = 0;
        for (int i = 0; i < n; i++) 
        {
            shift = diff[i] % 26;
            if (shift < 0) {
                shift += 26;
            }
            s[i] = ((s[i] - 'a') + shift) % 26 + 'a';
        }
        return s;
    }
};