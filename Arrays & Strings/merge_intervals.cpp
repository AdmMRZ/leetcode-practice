#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res; int r1=-1,r2=-1;
        int rows = intervals.size();
        sort (intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];  
        });
        r1=intervals[0][0];
        r2=intervals[0][1];
        for (int i=0;i<rows;i++)
        {
            if (r2<intervals[i][0]) 
            {
                res.push_back({r1,r2});
                r1=intervals[i][0];
                r2=intervals[i][1];
            }
            else 
            {
                if (r2<intervals[i][1]) r2=intervals[i][1];
            }   
        }
        res.push_back({r1,r2});
        return res;
    }
};