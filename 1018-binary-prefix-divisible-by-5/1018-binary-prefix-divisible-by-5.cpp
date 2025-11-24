class Solution {
public:
    int solve(string str){
        long long num = 0;
        for(char c : str) {
            num = num * 2 + (c - '0');
            num %= 5; 
        }
        return num;
    }
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        string str;
        vector<bool>ans;
        for(int i = 0; i < n ; i++){
            str += to_string(nums[i]);
            if(solve(str) % 5 ==0 ){
                ans.push_back(true);
            }
            else    ans.push_back(false);
        }
        return ans;
    }
};
   