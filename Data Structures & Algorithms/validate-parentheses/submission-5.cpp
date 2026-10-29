class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char c : s){
            if(c == '[' || c == '{' || c == '(' ){
                stk.push(c);
            }else{
                if(stk.empty()) return false;

                char t = stk.top(); stk.pop();
                if((c == ')' && t != '(') || (c == ']' && t != '[') || (c == '}' && t != '{')) return false;
            }
        }
        return stk.empty();
    }
};
