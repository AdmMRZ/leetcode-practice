#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> stk; 
        vector<int> res(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++) {
            while (!stk.empty() && stk.top().first < temperatures[i]) {
                int idx = stk.top().second;
                res[idx] = i - idx;
                stk.pop();
            }
            stk.push({temperatures[i], i});
        }
        return res;
    }
};
