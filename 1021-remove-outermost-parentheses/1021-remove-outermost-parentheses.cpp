class Solution {
public:
    
string removeOuterParentheses(string s) {
        char arr[s.length()];
        string str;
        int top = -1;
        
        for(int i = 0; s[i]; i++){
            if(s[i] == '('){
                arr[++top] = s[i];
                if(top > 0) str += arr[top];
            }
            else if(s[i] == ')'){
                if(top != 0) str += s[i];
                top--;
            }
        }
        return str;
    }
};