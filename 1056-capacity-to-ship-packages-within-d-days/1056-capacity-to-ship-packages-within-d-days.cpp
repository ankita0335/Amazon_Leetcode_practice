class Solution {
public:
    int find(vector<int>&weights,int cap)
    {
        int days=1;
        int load=0;
        for(int i=0;i<weights.size();i++)
        {
            if(load+weights[i]>cap)
            {
                days++;
                load= weights[i];
            }
            else 
                load+= weights[i];
        }
        return  days;
    }
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(),0);
        while(l<=h)
        {
            int mid = (l+ (h-l)/2);
            int d = find(weights, mid);
            if(d<=days)
            {
                h = mid-1;
            }
            else    l= mid+1;
        }
        return l;
    }
};