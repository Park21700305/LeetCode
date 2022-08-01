#include <iostream>
#include <stack>
using namespace std;

class MyQueue {

private:
    stack<int> s;

public:
    MyQueue() {}

    void push(int x) {
        s.push(x);
    }

    int pop() {

        stack<int> s2;
        while(!s.empty()){
            s2.push(s.top());
            s.pop();
        }

        int ret = s2.top();
        s2.pop();

        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }

        return ret;
    }

    int peek() {
        stack<int> s2;
        while(!s.empty()){
            s2.push(s.top());
            s.pop();
        }

        int ret = s2.top();

        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }

        return ret;
    }

    bool empty() {
        return s.empty();
    }
};