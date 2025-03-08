class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i =0;
        int j = 0, count = 0;
        int ans = INT_MAX;
        int  n = blocks.size();
        while (j < k  )
        {
            if(blocks[j] == 'W')    
                count++;
            j++;
        }
        ans = min ( count, ans );
        if(ans ==0 )    return 0;
        j = k;
        while ( j < n)
        {
            if(blocks[j] == 'W')    count++;
            if(blocks[i] == 'W')    count--;
            i++;
            j++;
            ans = min( ans, count);
        }
        return ans;
    }
};