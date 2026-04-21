#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (int i=0;i<tokens.size();i++)
        {
            if (tokens[i][0]=='*')
            {
                int temp=stk.top();
                stk.pop();
                int temp2=stk.top();
                stk.pop();
                stk.push(temp2*temp);
            }
            else if (tokens[i][0]=='/')
            {
                int temp=stk.top();
                stk.pop();
                int temp2=stk.top();
                stk.pop();
                stk.push(temp2/temp);
            }
            else if (tokens[i][0]=='+')
            {
                int temp=stk.top();
                stk.pop();
                int temp2=stk.top();
                stk.pop();
                stk.push(temp2+temp);
            }
            else if (tokens[i][0]=='-')
            {
                int temp=stk.top();
                stk.pop();
                int temp2=stk.top();
                stk.pop();
                stk.push(temp2-temp);
            }
            else stk.push(stoi(tokens[i]));
        }
        return stk.top();
    }
};