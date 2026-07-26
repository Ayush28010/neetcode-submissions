class Solution {
public:
    unordered_map<int,int> dp;
    int coinChange(vector<int>& coins, int amount) {
        int minCoin = dfs(coins,amount);
        return minCoin >= 1e9 ? -1 : minCoin;
    }

    int dfs(vector<int>& coins, int amount){
        if(amount == 0) return 0;

        if(amount< 0) return 1e9;
        if(dp.find(amount) != dp.end()){
            return dp[amount];
        }

        int res = 1e9;
        for(int coin : coins){
            res = min(res, 1 + dfs(coins, amount-coin));
        }
        dp[amount] =res;
        return res;
    }
};
