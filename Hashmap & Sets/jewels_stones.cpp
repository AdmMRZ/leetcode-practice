#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> check; int res=0;
        for (int i=0;i<jewels.length();i++)
        {
            check[jewels[i]]=1;
        }
        for (int i=0;i<stones.length();i++)
        {
            res+=check[stones[i]];
        }
        return res;
    }
};