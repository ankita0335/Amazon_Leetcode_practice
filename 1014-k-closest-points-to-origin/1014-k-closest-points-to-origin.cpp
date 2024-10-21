class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,pair<int,int>>>v;
        for(auto x:points){
            int dist=(x[0]*x[0])+(x[1]*x[1]);
            v.push_back({dist,{x[0],x[1]}});
        }
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        for(int i=0;i<k;i++){
            ans.push_back({v[i].second.first,v[i].second.second});
        }
        return ans;
    }
};