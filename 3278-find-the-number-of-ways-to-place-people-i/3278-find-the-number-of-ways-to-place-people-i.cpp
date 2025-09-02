class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i==j)   continue;
                if (points[i][0] <= points[j][0] && points[i][1] >= points[j][1]){
                    bool valid = true;
                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j) continue;
                        int kx = points[k][0];
                        int ky = points[k][1];
                        if (kx >= points[i][0] && kx <= points[j][0] &&
                            ky <= points[i][1] && ky >= points[j][1]) {
                            valid = false;
                            break;
                        }
                    }
                    if (valid) ans++;
                }
            }
        }
        return ans;
    }
};
