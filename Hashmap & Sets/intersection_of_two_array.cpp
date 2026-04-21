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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> check;
        vector<int> res;
        for (int i = 0 ; i < nums1.size() ; i++)
        {
            check.insert(nums1[i]);
        }
        for (int i = 0 ; i < nums2.size() ; i++)
        {
            if (check.count(nums2[i]))
            {
                res.push_back(nums2[i]);
                check.erase(nums2[i]);
            }
        }
        return res;
    }
};