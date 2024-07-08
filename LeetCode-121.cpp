class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro = 0;
        int m = prices[0];
        for(int i = 1; i<prices.size(); i++){
            if(m > prices[i]){
                m = prices[i];
            } else {
                if( pro < prices[i] - m){
                    pro = prices[i] - m;
                }
            }
        }
        return pro;
        
    }
};
