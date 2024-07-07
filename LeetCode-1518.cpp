class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int sum = numBottles;
        while(numBottles >= numExchange){
            int x=numBottles/numExchange;
            sum+=x;
            numBottles %=numExchange;
            numBottles+=x;
        }
        return sum;
        
    }
};
