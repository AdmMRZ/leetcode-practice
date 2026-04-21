#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size(),max=-1,curr=prices[0];
        for (int i=0;i<size;i++)
        {
            if (prices[i]<curr)curr=prices[i];
            if (prices[i]-curr>max)max=prices[i]-curr;
        }
        return max;
    }
};