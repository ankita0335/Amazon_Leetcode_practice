class Solution {
public:
    int totalMoney(int n) {
        int i = 1;
        int sum = 0;
        int j ;
        int cnt= 1;
        if(n==1)    return 1;
        while(i!=n){
            for(  j = i ; cnt<= n && j < i+7 ; j++){
                sum += j;
                cnt++;
            }
            if(cnt>n)    return sum;
            else
                i++;
        }
        return sum;
    }
};