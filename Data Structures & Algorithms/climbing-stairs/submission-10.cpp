class Solution {
public:
    
    int climbStairs(int n) {
        vector<int> dp(n,-1);
        return dfs( dp,n , 0);
    }

    int dfs(vector<int>& dp,int n , int i){
        if(i >= n) return i==n;
        if(dp[i] != -1) return dp[i];

        return dp[i] = dfs(dp,n,i+1) + dfs(dp,n, i+2);
    }
};
