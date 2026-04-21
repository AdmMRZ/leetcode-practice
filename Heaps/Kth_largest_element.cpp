#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if (nums.empty()) return 0;

        priority_queue <int> pq;
        int ans;

        for (auto num : nums) pq.push(num);

        while (k--)
        {
            ans = pq.top();
            pq.pop();
        }
        
        return ans;
    }
};