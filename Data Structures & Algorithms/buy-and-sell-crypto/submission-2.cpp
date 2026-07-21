class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = prices[0];
        int profit =0;
        for(int& sell : prices){
            profit = max(profit, sell - minBuy);
            minBuy = min(minBuy,sell);
        }
        return profit;
    }
};
