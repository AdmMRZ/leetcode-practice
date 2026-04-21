#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <map>
#include <climits>
using namespace std;
 
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 , sum = 0 , ans = INT_MAX;
        for (int r = 0 ; r < nums.size() ; r++)
        {
            sum += nums[r];
            while (sum >= target)
            {
                ans = min(ans , r - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        if (ans == INT_MAX) ans=0;
        return ans;
    }
};