// Time Complexity : O(N)
// Space Complexity : O(1)
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], profit = 0, sell = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            profit = max(prices[i] - buy, profit);
            if(prices[i] < buy)
                buy = prices[i];
        }
        return profit;
    }
};
