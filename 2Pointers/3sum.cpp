#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res; set <int> check;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < nums.size() - 1 ; i++)
        {
            int left = i + 1 , right = nums.size() - 1;
            while (left < right && !check.count(nums[i]))
            {
                if (nums[left] + nums[right] + nums[i] < 0)
                {
                    left++;
                }
                else if (nums[left] + nums[right] + nums[i] > 0)
                {
                    right--;
                }
                else if (nums[left] + nums[right] + nums[i] == 0)
                {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {left++;}
                    while (left < right && nums[right] == nums[right - 1]) {right--;}
                    left++;
                    right--; 
                }
            }
            check.insert(nums[i]);
        }
        return res;
    }
};