#include <iostream>
using namespace std;
#include <vector>   
#include <algorithm>

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1 , r = num;
        while (l <= r)
        {
            long long int m = l + (r - l) / 2;
            if (m * m < num) l = m + 1;
            else if (m * m > num) r = m - 1;
            else return true;
        }
        return false;
    }
};