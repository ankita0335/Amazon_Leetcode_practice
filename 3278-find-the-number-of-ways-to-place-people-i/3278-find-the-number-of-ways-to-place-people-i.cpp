class Solution {
public:
    static bool comp(const vector<int>& a, const vector<int>& b) {
        if (a[0] != b[0]) return a[0] < b[0];
        return a[1] > b[1];
    }
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        sort(points.begin(), points.end(),comp);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i==j)   continue;
                if (points[i][0] <= points[j][0] && points[i][1] >= points[j][1]){
                    bool valid = true;
                    for (int k = i+1; k < j; k++) {
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
};//O( n^2 log(n))