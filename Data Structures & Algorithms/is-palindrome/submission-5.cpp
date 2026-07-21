class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for(char c : s){
            if(isalnum(c)){
                filtered += tolower(c);
            }
        }

        string revS = filtered;
        reverse(revS.begin(),revS.end());
        return revS == filtered;
    }
};
