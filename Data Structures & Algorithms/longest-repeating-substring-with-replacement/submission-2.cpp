class Solution {
public:
    int characterReplacement(string s, int k) {
        int l =0,r=0;
        int ans =0;
        unordered_map<char,int> count;
        int maxx;
        for(r =0; r< s.size(); r++){
            count[s[r]]++;
            maxx = max (maxx, count[s[r]]);
            while(r-l+1 - maxx > k){
                count[s[l]]--;
                l++;
            }
            ans = max ( ans , r-l+1);
        }
        return ans;
    }
};
