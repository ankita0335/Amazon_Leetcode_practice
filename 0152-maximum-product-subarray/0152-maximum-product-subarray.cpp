class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product =1;
        int n= nums.size();
        int maxiproduct= INT_MIN;
        for(int i=0;i<n;i++)
        {
            product *= nums[i];
            maxiproduct= max(maxiproduct, product);
            if(product==0)
            {
                product= 1;
            }
        }
        int product2=1; //right to left ok
        int maxiproduct2= INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            product2 *= nums[i];
            maxiproduct2= max(maxiproduct2, product2);
            if(product2==0)
            {
                product2= 1;
            }
        }
        return max(maxiproduct2 , maxiproduct);
    }
};