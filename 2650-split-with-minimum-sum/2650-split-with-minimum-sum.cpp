class Solution {
public:
    int splitNum(int num) 
    {
        string s = to_string(num);
        sort(s.begin(), s.end());
        int f=0;
        string num1;
        string num2;
        for(int i=0;i<s.size(); i++)
        {
            if(f)
            {
                num1+=s[i];
                f=!f;
            }
            else
            {
                num2+=s[i];
                f=!f;
            }
        }
        int n1 = stoi(num1);
        int n2= stoi(num2);
        return n1+n2;
    }
};