class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int up = 0, left = 0;
        for(int i = 0; i<n; i++){
            if(moves[i] == 'U'){
                up++;
            }
            else if(moves[i] == 'D')    up--;
            else if(moves[i] == 'L')    left++;
            else    left--;
        }
        return up == 0 && left == 0;
    }
};