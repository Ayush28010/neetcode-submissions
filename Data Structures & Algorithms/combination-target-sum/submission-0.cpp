class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        backtrack(nums,target,{},0,0);
        return res;
    }

    void backtrack(vector<int>& nums, int target,vector<int> cur, int index, int total){
        if(total == target){
            res.push_back(cur);
            return;
        }

        for(int i = index; i< nums.size();i++){
            if(nums[i]+total > target){
                return;
            }
            cur.push_back(nums[i]);
            backtrack(nums,target,cur,i,total+nums[i]);
            cur.pop_back();
        }
    }
};
