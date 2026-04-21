#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int st,range=1,maxc=0;
        set<int> s(nums.begin(), nums.end());
        for (int i:s)
        {
            if (s.count(i-1)==0)
            {
                st=i;
                range=1;
                while (s.count(st+1))
                {
                    st++;
                    range++;
                }
                maxc=max(range,maxc);
            }
        }
        return maxc;
    }
};