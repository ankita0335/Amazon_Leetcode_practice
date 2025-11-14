class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        for(int e: nums)
        {
            if(i<2 || nums[i-2] != e)
            {
                nums[i]=e;
                i+=1;
            } 
        }
        return i;
    }
};
/*For each number, if I have added fewer than 2 elements OR the element at position i-2 is different from the current number, I keep it.
This guarantees each number appears at most twice.
The algorithm works in O(n) time and O(1) space.*/