#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0 , r = 0 , count_max = -1 , k_count = k;
        for (r ; r < nums.size() ; r++)
        {
            if (nums[r] == 0)
            {
                k_count -= 1;
            }
            while (k_count == 0)
            {
                if (nums[l] == 0) k_count++;
                l++;
            }
            count_max = max(count_max , r - l  + 1);
        }
        return count_max;
    }
};