class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>s;
        for(auto ele: arr)
        {
            if(s.count(2*ele) || (ele%2==0 && s.count(ele/2)))
                return true;
            s.insert(ele);
        }
        return false;
    }
};