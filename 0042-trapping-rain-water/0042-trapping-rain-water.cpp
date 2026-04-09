class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int baridx = 0;
        int maxbar = height[0];
        int ans = 0;
        
        for(int i=0; i<n; i++){
            if(height[i] > maxbar){
                maxbar = height[i];
                baridx = i;
            }
        }

        int lmax =0 , rmax = 0;

        for(int i = 0 ; i< baridx; i++){
            if(lmax > height[i]){
                ans += lmax - height[i];
            }
            else
                lmax = height[i];
        }

        for(int i=n-1; i> baridx; i--){
            if(rmax > height[i]){
                ans += rmax - height[i];
            }
            else
                rmax = height[i];
        }
        return ans;
    }
};

/*I first find the index of the maximum height bar. This splits the array into two parts.

Then I traverse from left to max index, maintaining left max and calculating trapped water.
Similarly, I traverse from right to max index, maintaining right max.

This works because the highest bar acts as a boundary, so each side can be processed independently.

The solution runs in O(n) time and O(1) space.
*/