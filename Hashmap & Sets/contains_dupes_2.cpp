#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> check;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            if (check.count(nums[i]))
            {
                if (i - check[nums[i]] <= k) return true;
            }
            check[nums[i]] = i;
        }
        return false;
    }
};