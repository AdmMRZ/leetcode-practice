#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = -10000 , sum = 0; 
        for (int i = 0 ; i < nums.size() ; i++)
        {
            sum += nums[i];
            if (i >= k)
            {
                sum -= nums[i - k];
            }
            if (i >= k - 1) ans = max(ans , sum / k);
        }
        return ans;
    }
};