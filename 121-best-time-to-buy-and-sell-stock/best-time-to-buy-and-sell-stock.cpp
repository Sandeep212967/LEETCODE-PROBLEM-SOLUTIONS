class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {

            // Update minimum buying price
            minPrice = min(minPrice, prices[i]);

            // Calculate profit if sold today
            int profit = prices[i] - minPrice;

            // Update maximum profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
        
    }
};