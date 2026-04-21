#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            } 
            else if (s[i] == ')' && !stk.empty() && stk.top()=='(') {
                stk.pop();
            } 
            else if (s[i] == '}' && !stk.empty() && stk.top()=='{') {
                stk.pop();
            } 
            else if (s[i] == ']' && !stk.empty() && stk.top()=='[') {
                stk.pop();
            } 
            else {
                return false;
            }
        }
        return stk.empty();
    }
};
