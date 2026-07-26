class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res = {{}};
       
        for (int i = 0; i < nums.size(); i++) {
            int size = res.size();
            
            // Fix: Changed the inner loop variable from 'i' to 'j'
            for (int j = 0; j < size; j++) {
                 vector<int> subset = res[j]; // Copy an existing subset
                 subset.push_back(nums[i]);  // Use outer loop 'i' to get the current number
                 res.push_back(subset);      // Add the expanded subset back to results
            }
        }
        return res;
    }
};