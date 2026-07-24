class Solution {
public:
    
    int evalRPN(vector<string>& tokens) {
        list<string> dll(tokens.begin(), tokens.end());

        auto it = dll.begin();

        while( dll.size( ) >1 && it!= dll.end()){
            if( *it == "+" || *it == "-" ||*it == "*" ||*it == "/" ){
                auto right_it = prev(it);
                auto left_it = prev(right_it);

                int l = stoi(*left_it);
                int r = stoi(*right_it);
                int res= 0;
                if(*it =="+") res= l+r;
                else if(*it =="-") res = l-r;
                else if(*it =="*") res = l*r;
                else  res = l/r;

                *it = to_string(res);

                dll.erase(left_it);
                dll.erase(right_it);
            }
            it++;
        }
        return stoi(dll.front());
    }
};
