#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[0] == '#')
                s.erase(0,1);
            if(s[i] == '#')
            {
                s.erase(i-1, 2);
                i = 0;
            }
        }
        for(int i = 0; i < t.length(); i++)
        {
            if(t[0] == '#')
                t.erase(0,1);
            if(t[i] == '#')
            {
                t.erase(i-1, 2);
                i = 0;
            }
        }
        return s==t;
    }
};

