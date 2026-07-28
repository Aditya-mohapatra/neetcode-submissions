class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int buy = 0;
        int sell = 0;
        long long profit = 0.0;
        long long temp_profit = 0.0;

        while (sell < size-1) {
            sell++;
            temp_profit = prices[sell] - prices[buy];
            if (temp_profit > profit) {
                profit = temp_profit;
            };
            if (prices[sell] < prices[buy]) {
                buy = sell;
            };
            
            
        }
        return profit;
    }
};
