class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int res=0;
        for(int i=0;i<derived.size();i++)
        {
            res ^= derived[i];
        }
        return res==0;
    }
};