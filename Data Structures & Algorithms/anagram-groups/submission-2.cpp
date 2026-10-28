class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto str : strs){
            string key = str;
            string org = str;
            sort(key.begin(), key.end());
            sort(str.begin(), str.end());
            if(key == str){
                mp[key].push_back(org); 
            }
        }

        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
