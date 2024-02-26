
class Solution {
public:

   int solve(int idx, int buy, vector<int> &prices,int limit,vector<vector<vector<int>>>& dp){
    if(idx==prices.size()){
        return 0;
    }
    if(limit==0){
        return 0;
    }

    if(dp[idx][buy][limit]!=-1)
    return dp[idx][buy][limit];
    int profit=0;
    if(buy){
        int buy=-prices[idx]+solve(idx+1,0,prices,limit,dp);
        int skip=solve(idx+1,1,prices,limit,dp);
        profit=max(buy,skip);
    }else{
      int sell=prices[idx]+solve(idx+1,1,prices,limit-1,dp);
      int skip=solve(idx+1,0,prices,limit,dp);
      profit=max(sell,skip);

    }
  return dp[idx][buy][limit]=profit;
   }
    

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (2,vector<int>(3,-1)));
      return solve(0,1,prices,2,dp);
    }
};