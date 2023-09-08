class Solution
{
    public:
        int maxProfit(vector<int> &p)
        {
            int n = p.size();
            vector<vector < int>> dp(n + 1, vector<int> (2, 0));
            for (int i = n - 1; i >= 0; i--)
            {
                for (int buy = 0; buy <= 1; buy++)
                {
                    int profit;
                    if (buy)
                    {
                        int buy = -p[i] + dp[i + 1][0];
                        int notbuy = dp[i + 1][1];
                        profit = max(buy, notbuy);
                    }
                    else
                    {
                        int sell = p[i] + dp[i + 1][1];
                        int notsell = dp[i + 1][0];
                        profit = max(sell, notsell);
                    }
                    dp[i][buy] = profit;
                }
            }
            return dp[0][1];
        }
};