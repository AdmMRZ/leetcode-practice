#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size()==1) return strs.at(0);
        string res=""; 
        int id=0, id2=0, min_length=strs.at(0).length();
        
        for (int i=0; i<strs.size(); i++) {
            if (strs.at(i).length() < min_length) min_length = strs.at(i).length();
        }
    
        while (id<min_length) {
            if (strs[0][id] != strs[id2][id]) break;
            else if (strs[0][id] == strs[id2][id]){
                id2++;
                if (id2 == strs.size()-1 && strs[0][id] == strs[id2][id]) {
                    res += strs[id2][id];
                    id2 = 0;
                    id++;
                } else if ((id2 == strs.size()-1 && strs[0][id] != strs[id2][id])) break;
            }
        }
        return res;
    }
};