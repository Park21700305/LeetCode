#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1 = 0;
        int count2 = 0;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0; i<s.length()/2; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count1++;
        }
        for(int i=s.length()/2; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count2++;
        }
        if(count1 == count2) return true;
        else return false;
    }
};