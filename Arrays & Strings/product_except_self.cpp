#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mult=1,mult2=1,size=nums.size();
        vector <int> arr(nums.size());
        vector <int> arr2(nums.size());
        for (int i=0;i<size;i++){
            arr[i]=mult;
            arr2[i]=mult2;
            mult*=nums[i];
            mult2*=nums[size-1-i];
        }
        for (int i=0;i<size;i++){
            nums[i]=arr[i]*arr2[i];
        } 
        return nums;
    }
};