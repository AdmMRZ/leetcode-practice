#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1 , r = n , res;
        while (l<=r)
        {
            int m = l + (r - l) / 2;
            if (!isBadVersion(m)) l = m + 1;
            else
            {
                r = m - 1;
                res = m;
            }
        }
        return res;
    }
};