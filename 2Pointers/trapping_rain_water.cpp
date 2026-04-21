#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0 , right = height.size() - 1 , count = 0;
        int leftM = 0 , rightM = 0;
        while (left < right)
        {
            if (height[left] < height[right])
            {
                if (height[left] > leftM) leftM = height[left];
                else count += leftM - height[left];
                left++;
            }
            else 
            {
                if (height[right] > rightM) rightM = height[right];
                else count += rightM - height[right];  
                right--;
            }
        }
        return count;
    }
};