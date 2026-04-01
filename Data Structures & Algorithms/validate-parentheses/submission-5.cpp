class Solution {
public:
    bool isValid(string s) {
        stack<char> checkParenthesis;
        
        for(char x : s){
            if(x == '[' || x== '{' || x=='('){
                checkParenthesis.push(x);

            }
            else if(x==')' && !checkParenthesis.empty()){
                if(checkParenthesis.top() == '('){
                    checkParenthesis.pop();
                }
                else{
                    return false;
                }
            }
            else if(x==']' && !checkParenthesis.empty()){
                if(checkParenthesis.top() == '['){
                    checkParenthesis.pop();
                }
                else{
                    return false;
                }
            }
            else if(x=='}' && !checkParenthesis.empty()){
                if(checkParenthesis.top() == '{'){
                    checkParenthesis.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return checkParenthesis.empty();
    }
};
