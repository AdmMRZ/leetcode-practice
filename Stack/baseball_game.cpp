#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> nums;
        int res = 0;
        
        for (string s : operations) {
            if (s == "C") {
                res -= nums.top();
                nums.pop();
            } else if (s == "D") {
                int temp = nums.top() * 2;
                res += temp;
                nums.push(temp);
            } else if (s == "+") {
                int top = nums.top();
                nums.pop();
                int newTop = top + nums.top();
                nums.push(top);
                nums.push(newTop);
                res += newTop;
            } else {
                int num = stoi(s);
                res += num;
                nums.push(num);
            }
        }
        return res;
    }
};