class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i = 0;
        while(i <n-1)       // last element ko decode nahi karna
        {
            if(bits[i] == 1)
                i += 2;    
            else
                i += 1;       
        }
        return i == n - 1;     // agar last index par khatam hua, to one bit
    }
};
