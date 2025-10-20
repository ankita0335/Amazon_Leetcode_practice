class Solution {
public:
    int finalValueAfterOperations(vector<string>& x) {
        int X=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=="X++" || x[i]=="++X"){
            X++;
        }
        else{
            X--;
        }
    }
    return X;  
    }
};