class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int bestBuy = prices[0];
        int maxProfit = 0;

        for(int i=1; i<prices.size(); i++){
            bestBuy = min(bestBuy, prices[i]);
            int currProfit = prices[i] - bestBuy;
            maxProfit = max(maxProfit, currProfit);
        }
        return maxProfit;
    }
};

