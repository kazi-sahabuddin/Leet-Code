class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int result = 0;
        int mx = 0;
        int buy = prices[0];
        int mn = prices[0];

        for(int i = 1; i < prices.size(); i++){

            if(mn > prices[i]){
                mn = prices[i];
            } else {
                if(mx < prices[i] - mn){
                    mx = prices[i] - mn;
                }                
            }


            if(buy > prices[i]){
                buy = prices[i];
            } else {
                result += prices[i] - buy;
                buy = prices[i];               
                
            }
        }

        return max(result, mx);
        
    }
};
