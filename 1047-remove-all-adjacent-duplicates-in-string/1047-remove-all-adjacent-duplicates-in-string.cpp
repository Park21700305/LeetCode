class Solution {
public:
    string removeDuplicates(string s) {
        string answer;
        for(auto i: s) {
            if(!answer.empty() && answer.back() == i) {
                answer.pop_back();
            } else {
                answer.push_back(i);
            }
        }
        return answer;
    }
};