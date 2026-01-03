class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int num;
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            if(count == 0){
                num = nums[i];
            }
            if(num == nums[i]){
                count++;
            }
            else    count--;
        }
        return num;
    }
};