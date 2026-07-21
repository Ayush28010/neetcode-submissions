class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        for(int i =0;i<nums.size();i++){
            int prod = 1;
            for(int j=0;j<nums.size();j++){
               if(i!=j){
                prod = prod*nums[j];
               }

            }
            res[i]= prod;
        }
        return res;
    }
};
