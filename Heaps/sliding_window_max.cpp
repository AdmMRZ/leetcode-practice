#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;
        int left = 0;

        for (int right = 0 ; right < nums.size() ; right++)
        {
            while (!dq.empty() && dq.back() < nums[right]) dq.pop_back();
            dq.push_back(nums[right]);

            if (right - left + 1 > k) left++;

            if (right - left + 1 == k)
            {
                res.push_back(dq.front());
                if (dq.front() == nums[left]) dq.pop_front();
            }
        }
        return res;
    }
};