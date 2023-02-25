class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minimum_price = prices[0];
        
        for(int i=1;i<prices.size();i++){
            
            minimum_price =min(prices[i],minimum_price);
            profit=max(profit,(prices[i] - minimum_price)); 
            
        }
        return profit;
    }
};























