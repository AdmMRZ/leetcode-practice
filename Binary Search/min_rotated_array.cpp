#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0 , right = nums.size() - 1 ;
        int ans = 1000000;
        while (left <= right)
        {
            int m = left + (right - left) / 2;
            ans = min (ans , nums[m]);
            if (nums[m] > nums[right]) left = m + 1;
            else right = m - 1;
        }
        return ans;

    }
};