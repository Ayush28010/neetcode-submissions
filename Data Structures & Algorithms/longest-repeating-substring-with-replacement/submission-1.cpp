class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        for ( int i =0; i < s.size() ; i ++){
            unordered_map<char,int> count;
            int maxf = 0;
            for ( int j =i ; j< s.size(); j++){
                count[s[j]]++;
                maxf = max(maxf, count[s[j]]);
                if(j-i+1 - maxf <= k){
                    ans = max(ans , j-i +1);
                }
            }
        }
        return ans;
    }
};
