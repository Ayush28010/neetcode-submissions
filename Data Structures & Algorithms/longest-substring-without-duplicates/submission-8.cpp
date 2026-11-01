class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_map<char,int> mp;
        int ans =0;
        for( int right =0;right< s.size();right++){
            if(mp.find(s[right]) != mp.end()){
                left = max(mp[s[right]]+1,left);
            }
            mp[s[right]] = right;
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};
