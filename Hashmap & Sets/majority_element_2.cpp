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
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> check;
        vector<int> res;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            check[nums[i]]++;
        }
        for (auto i : check)
        {
            if (i.second > nums.size()/3) res.push_back(i.first);
        }
        return res;
    }
};