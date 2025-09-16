class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int curr=nums[0];
        vector<int> st;
        while(i<n){
            if(st.empty() || __gcd(st.back(),curr)==1)
            {
                st.push_back(curr);
                i++;
                if(i>=nums.size()) break;
                curr=nums[i];
            }
            else{
                int top=st.back();
                st.pop_back();
                curr=lcm(top,curr);
            }
        }
        return st;
    }
};