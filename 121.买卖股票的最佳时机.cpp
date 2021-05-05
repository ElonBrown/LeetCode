/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int sell = 0, buy = INT_MIN;
        for (int &price : prices)
        {
            buy = max(buy, -price);
            sell = max(sell, price + buy);
        }
        return sell;
    }
};
// @lc code=end
