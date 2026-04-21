#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int> m;
        priority_queue<pair<int,int>> pq;
        vector <int> res;

        for (int num : nums) m[num]++;

        for (auto p : m)
        {
            pq.push({p.second , p.first});
        }

        while (k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};  