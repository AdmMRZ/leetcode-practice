#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> counter1 (26,0) , counter2 (26,0);
        int left = 0 , right = 0;

        for (int i = 0 ; i < s1.size() ; i++) counter1[s1[i] - 'a']++;

        for (right ; right < s2.size() ; right++)
        {
            counter2[s2[right] - 'a']++;
            if (right - left + 1 == s1.size())
            {
                if (counter2 == counter1) return true;
                counter2[s2[left] - 'a']--;
                left++;
            }
        }
        return false;
    }
};