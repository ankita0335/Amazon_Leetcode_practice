class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = INT_MAX;
        int n= tasks.size();
        for(int i = 0; i<n; i++){
            int currsum = tasks[i][0]+tasks[i][1];
            mini = min(currsum, mini);
        }
        return mini;
    }
};