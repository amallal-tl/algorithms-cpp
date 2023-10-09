//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty() || prices.size() == 1) return 0;
        int minPrice = prices[0], maxProfit = 0;
        for(int i = 1; i < prices.size(); i++){
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(prices[i], minPrice);
        }
        return maxProfit;
    }
};