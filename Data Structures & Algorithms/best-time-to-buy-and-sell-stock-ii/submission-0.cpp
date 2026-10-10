class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();

        int profit=0;
        int buy=prices[0];
        int sell=prices[1];
        int i=2;

         if (size < 2) return 0;
        
        while(i<size){            
            if(buy<sell){
                profit=profit+sell-buy;
                buy=sell;
                sell=prices[i++];
            }else{
                buy=sell;
                sell=prices[i++];

            }
            
        };
         if (buy < sell) {
            profit = profit + sell - buy;
        }
        return profit;
        
        
    }
};