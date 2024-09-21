class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        int x = 1;
        for (int i = 0; i < n; i++) 
        {
            ans.push_back(x);
            if (x * 10 <= n) 
            {
                x *= 10; 
            } 
            else 
            {
                while (x % 10 == 9 || x + 1 > n) 
                {
                    x /= 10;  
                }
                x++;  
            }
        }
        return ans;
    }
};
