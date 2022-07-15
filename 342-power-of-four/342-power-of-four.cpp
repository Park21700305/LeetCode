#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
            for(int i=0; n >= pow(4,i); i++){
                if(n == pow(4,i)) return true;
            } return false;
        }
};
