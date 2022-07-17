#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> strs) {
        int shortest = 200;
        int idx;
        int count = 0; 
        int scount = 200;
        string answer = "";
        for(int i=0; i<strs.size(); i++)
            if(strs[i].length() < shortest){
                shortest = strs[i].length();
                idx = i;
            }
        for(int i=0; i<strs.size(); i++){
            count = 0;
            for(int j=0; j<shortest; j++){
                if(strs[idx][j] == strs[i][j]) count++;
                else break;
            }
            if(scount > count) scount = count;
        }
        if(scount == 0) return answer;
        else{
            for(int i=0; i<scount; i++)
                answer += strs[idx][i];
            return answer;
        }

    }
};