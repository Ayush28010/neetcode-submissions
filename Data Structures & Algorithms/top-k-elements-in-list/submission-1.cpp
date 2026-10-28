class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        vector<int> ans;
        priority_queue<pair<int,int>> heap;
        for(auto it : mp){
            heap.push({it.second,it.first});
        }

        for(int i = 0 ; i< k ; i++){
            auto [a,b] = heap.top(); heap.pop();
            ans.push_back(b);
        }
        return ans;
    }
};
