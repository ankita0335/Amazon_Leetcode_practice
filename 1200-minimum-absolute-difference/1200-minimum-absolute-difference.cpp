class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n= arr.size();
        int mini = INT_MAX;
        vector<vector<int>>v;
        
        sort(arr.begin(), arr.end());

        for(int i = 0 ; i < n-1 ; i++){
            mini = min(arr[i+1]-arr[i], mini);
        }

        for(int i = 0 ; i < n-1 ; i++){
            if(arr[i+1]- arr[i] == mini){
                v.push_back({arr[i], arr[i+1]});
            }
        }
        return v;
    }
};