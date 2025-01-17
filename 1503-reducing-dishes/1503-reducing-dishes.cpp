class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n= satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        vector<int>newv(n);
        newv[0]=satisfaction[0];
        for(int i=1;i<n;i++)
        {
            newv[i]= newv[i-1]+satisfaction[i];
        }
        int maxi=0, curr=0;
        for(int i=0;i<newv.size();i++)
        {
            curr += newv[i];
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};