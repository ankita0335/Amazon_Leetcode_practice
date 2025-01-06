class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cntodd=0;
        int cnteven=0;
        for(int i=0;i<position.size();i++)
        {
            if(position[i]%2==0)
                cnteven++;
            else 
                cntodd++;
        }
        return min(cnteven, cntodd);
    }
};