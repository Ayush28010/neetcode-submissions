class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashmap;
        for ( auto str : strs){
            string key = str;
            sort(key.begin(), key.end());
            hashmap[key].push_back(str);
        }
        vector<vector<string>> res;
        for( auto x : hashmap){
            res.push_back(x.second);
        }
        return res;
    }
};
