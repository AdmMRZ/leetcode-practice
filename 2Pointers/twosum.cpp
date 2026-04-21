#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int left=0,right=nums.size()-1;
        while (left<right)
        {
            if (nums[left]+nums[right]==target)
            {
                res.push_back(left+1);
                res.push_back(right+1);
                break;
            }
            else if (nums[left]+nums[right]>target)
            {
                right--;
            }
            else left++;
        }   
        return res;
    }
};