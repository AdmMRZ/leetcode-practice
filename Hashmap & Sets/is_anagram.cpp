#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        map <char,int> check,check2;
        for (int i=0;i<s.size();i++)
        {
            check[s[i]]++;
            check2[t[i]]++;
        }
        return check2==check;
    }
};