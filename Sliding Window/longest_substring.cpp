#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <map>
#include <climits>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0 , ans = 0;
        unordered_set <char> check;
        for (int r = 0 ; r < s.size() ; r++)
        {
            while (check.count(s[r]))
            {
                check.erase(s[l]);
                l++;
            }
            ans = max (ans , r - l + 1);
            check.insert(s[r]);
        }
        return ans;
    }

};
