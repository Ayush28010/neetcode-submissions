class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         if (nums.empty()) return 0;
        int maxsofar = nums[0];
        int curr =nums[0];
        for(int i = 1; i< nums.size();i++){
            curr =max(nums[i], curr+nums[i]);
            maxsofar = max(curr,maxsofar);
        }
        return maxsofar;
    }
};
