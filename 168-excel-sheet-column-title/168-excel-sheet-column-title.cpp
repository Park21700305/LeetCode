class Solution {
public:
    string convertToTitle(int n) {
        string answer;
        
        
        while(n){
            n -= 1;
            char temp= 'A'+n%26;
            answer = temp+answer;
            n /= 26;
        }
       
    return answer;    
    }
};