class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans=0;
        for(int i =0; i< s.size();i++){
            unordered_set<char> chars;
            for(int j =i; j<s.size();j++){
                if(chars.find(s[j])!=chars.end()){
                    break;
                }
                chars.insert(s[j]);
            }
            ans = max(ans,(int)chars.size());
        }
        return ans;
    }
};
