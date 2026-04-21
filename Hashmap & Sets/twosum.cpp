#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res; map <int,int> m;
        for (int i=0;i<nums.size();i++)
        {
            if (m.count(nums[i])) {
                res.push_back(m[nums[i]]);
                res.push_back(i);
                return res;
            }
            m[target-nums[i]]=i;
        }
        return res;
    }
};