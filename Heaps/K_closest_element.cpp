#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        vector<vector<int>> res;

        for (int i = 0; i < points.size(); i++) {
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1]; 
            pq.push({dist, {points[i][0], points[i][1]}});
        }

        while (k-- && !pq.empty()) {
            res.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }

        return res;
    }
};
