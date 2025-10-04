class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        int total= 0;
        for(auto i: arr){
            total += i;
        }
        int leftsum = 0;
        for(int i = 0; i<n; i++){
            int right = total - leftsum - arr[i];
            if(right == leftsum )   return i;
            leftsum += arr[i];
        }
        return -1;
    }
};