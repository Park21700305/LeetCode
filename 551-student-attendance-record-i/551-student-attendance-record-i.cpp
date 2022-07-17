#include <iostream>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int A = 0;
        int L = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == 'A') A++;
            else if(s[i] == 'L'){
                if(s[i+1] == 'L' && s[i+2] == 'L') return false;
            }
        }
        return A<2;
    }
};