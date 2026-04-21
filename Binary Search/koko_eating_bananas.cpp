#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool working(vector<int>& piles, int k, int h) {
        int hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k; 
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end()); 
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (working(piles, mid, h)) {
                r = mid; 
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
