class Solution {
public:
    pair<int,int>parse(string s)
    {
        int pluskiposition = s.find('+');
        int real = stoi(s.substr(0, pluskiposition));
        int imag= stoi(s.substr(pluskiposition+1, s.length()-pluskiposition-2));
        return {real, imag};
    }
    string complexNumberMultiply(string num1, string num2) {
        pair<int,int>frst = parse(num1);
        pair<int,int>sec = parse(num2);
        int real = frst.first * sec.first - frst.second * sec.second;
        int imag = frst.first * sec.second + frst.second * sec.first;
        string res = to_string(real)+ "+" + to_string(imag)+ "i";
        return res;
    }
};

/* (a+bi)*(c+di)
    a*c + a*di + bi*c + b*di^2;
    a*c + a*di + bi*c-b*d
    ac-b*d +(a*d+b*c)i

*/