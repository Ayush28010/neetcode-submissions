class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans=false;
        unordered_map<int,int> hashmap;
        for (int i =0 ;i< nums.size();i++){
            hashmap[nums[i]]++;
        }
        for( auto x : hashmap){
            if(x.second > 1 ){
                ans=  true;
            }
          
        }
        return ans;
    }
};