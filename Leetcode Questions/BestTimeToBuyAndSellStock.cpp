//leetcode 121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        bool isStockPurchased = false;
        int MaxProfit = INT_MIN;
        for(int i=1;i<prices.size();i++){
            mini = min(prices[i],mini);
             int profit = prices[i] - mini;
              MaxProfit = max(MaxProfit,profit);
        }
        if(MaxProfit < 0) return 0;
        else return MaxProfit;
    }
};