class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> operand;
        for( const string& token: tokens ){
            if(token == "+"){
                int a = operand.top(); operand.pop();
                int b = operand.top(); operand.pop();
                int res = a+b;
                operand.push(res);
            }else if(token == "-" ){
                int a = operand.top(); operand.pop();
                int b = operand.top(); operand.pop();
                int res = b-a;
                operand.push(res);
            }else if(token == "*" ){
                int a = operand.top(); operand.pop();
                int b = operand.top(); operand.pop();
                int res = a*b;
                operand.push(res);
            }else if(token == "/" ){
                int a = operand.top(); operand.pop();
                int b = operand.top(); operand.pop();
                int res = b/a;
                operand.push(res);
            }else{
                operand.push(stoi(token));
            }
            
            
        }
        return operand.top();
        
    }
};
