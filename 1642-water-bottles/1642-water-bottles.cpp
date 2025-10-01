class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        int r=0;
        while(numBottles>=numExchange)
        {
            int nbottle=(numBottles)/numExchange;
            r=(numBottles)%numExchange;
            sum=sum+nbottle;
            numBottles=nbottle+r;
        }
        return sum;
    }
};