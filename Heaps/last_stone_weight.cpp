#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;

        for (int stone : stones) pq.push(stone);

        while (pq.size() > 1)
        {
            int temp1 = pq.top(); pq.pop();
            int temp2 = pq.top(); pq.pop();
            if (temp1 != temp2) pq.push(temp1 - temp2);
        }
        
        if (pq.empty()) return 0;
        return pq.top();
    }
};