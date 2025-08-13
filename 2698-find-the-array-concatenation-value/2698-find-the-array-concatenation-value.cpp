class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i<j)
        {
            string str = to_string(nums[i])+ to_string(nums[j]);
            sum += stoi(str);
            i++;
            j--;
        }
        return i==j ? sum+=nums[i]: sum;
    }
};