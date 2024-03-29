class Solution {
public:
    bool isPalindrome(string s) {
        s = f1(s);
        for(int i=0; i<s.size()/2; i++){
            if (s[i]!= s[s.size()-i-1]){
                return false;
            }
        }
        return true;
    }
    
    string f1(string& s){
        string d;
        for(int i=0; i<s.size(); i++){
            if(::isalpha(s[i]) || ::isdigit(s[i])){
                d.push_back(::tolower(s[i]));
            }
        }
        return d;
    }
};