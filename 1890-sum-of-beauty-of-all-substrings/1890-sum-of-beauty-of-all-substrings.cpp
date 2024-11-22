class Solution {
public:
    int getmin(vector<int>&frq)
    {
        int mini=INT_MAX;
        for(auto ele: frq)
        {
            if(ele!=0)
                mini = min(mini, ele);
        }
        return mini;
    }
    int getmax(vector<int>&frq)
    {
        int maxi=0;
        for(auto ele: frq)
        {
            maxi = max(maxi, ele);
        }
        return maxi;
    }
    int beautySum(string s) 
    {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            vector<int>frq(26,0);
            for(int j=i;j<n;j++)
            {
                frq[s[j]-'a']++;
                int beauty = getmax(frq)-getmin(frq);
                sum+= beauty;
            }
        }
        return sum;
    }
};