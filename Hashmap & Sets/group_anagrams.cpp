#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            res[key].push_back(s);
        }
        
        vector<vector<string>> res_str;
        for (auto& entry : res) {
            res_str.push_back(entry.second);
        }
        
        return res_str;
    }
};
