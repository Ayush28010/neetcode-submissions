class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() ,-1);
        return dfs(dp,nums,0);
    }

    int dfs(vector<int>& dp,vector<int>& nums, int i){
        if(i >= nums.size() ){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }

        return dp[i] = max(dfs(dp,nums, i+1), nums[i]+ dfs(dp,nums, i+2));
    }
};
