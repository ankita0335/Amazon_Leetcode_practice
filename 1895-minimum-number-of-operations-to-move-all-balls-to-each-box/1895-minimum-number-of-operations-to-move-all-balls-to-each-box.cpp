class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        vector<int>positionOf1s;
        for(int i=0; i< boxes.size(); i++)
        {
            if(boxes[i] == '1')
            {
                positionOf1s.push_back(i);
            }
        }
        vector<int>ans;
        int j=0;
        while(j < boxes.size())
        {
            int sum=0;
            for(int i=0;i<positionOf1s.size(); i++)
            {
                sum+=abs(positionOf1s[i]-j);
            }
            ans.push_back(sum);
            j++;
        }
        return ans;
    }
};