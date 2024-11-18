class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        int sum=0;
        vector<int>v;
        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                code[i]=0;
            }
            return code;
        }
        else if(k>0)
        {
            for(int i=0;i<n;i++)
            {
                int c=0;
                sum=0;
                for(int j=1;j<=k;j++)
                {
                    sum+=code[(i+j)%n];
                }
                v.push_back(sum);
            }
            return v;
        }
        else if(k<0)
        {
            for(int j=0;j<n;j++)
            {
                int c=0;
                sum=0;
                for(int i=1;i<=abs(k);i++)
                {
                    sum+=code[abs(j-i+n)%n];
                }
                v.push_back(sum);
            }
            return v;
        }
        return {};
    }
};