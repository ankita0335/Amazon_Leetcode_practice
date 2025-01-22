class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int l=0,h=n.size()-1;
        while(l<=h){
            if(n[l]+n[h]==target){
                return {l+1,h+1};
            }
            else if(n[l]+n[h]<target){
                l++;
            }
            else    
                h--;
        }
        return {};
    }
};