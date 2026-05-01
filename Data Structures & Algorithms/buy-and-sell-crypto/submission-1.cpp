class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1;
        int n = prices.size();
        int max_profit = 0;
        while (right < n) {
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                max_profit = max(max_profit, profit);
            } else {
                left = right;
            }
            right++;
        }
        return max_profit;
    }
};
