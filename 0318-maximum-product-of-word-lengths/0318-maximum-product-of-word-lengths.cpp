class Solution {
public:
    int maxProduct(vector<string>& words) 
    {
        int n=words.size(); 
        unordered_set<int> arr[26];   
        for(int i=0;i<n;i++)
        {
            int m=words[i].size();  
            for(int j=0;j<m;j++)
            {
                int index=words[i][j]-97; 
                if(arr[index].count(i)==0)
                {
                    arr[index].insert(i);  
                }
            }
        }
        int ans=0;     
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {	
                bool isfound=false;
                for(int k=0;k<26;k++)
                {
                    if(arr[k].count(i)>0 && arr[k].count(j)>0)
                    {
                        isfound=true;
                        break;
                    }
                }
                if(!isfound)
                {
                    int val=words[i].size()*words[j].size();
                    ans=max(ans,val);     // Maintainin the maximum product of words length.
                }
            }
        } 
        return ans;  
    }
};