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
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0, sum = 0;
        unordered_map<int, int> map;
        map[0] = 1;
        
        for (int num : nums) {
            sum += num;
            if (map.count(sum - k))
                count += map[sum - k];
            map[sum]++;
        }
        
        return count;
    }
};