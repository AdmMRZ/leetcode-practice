#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char,int> ransom;
        for (int i=0;i<ransomNote.size();i++)
        {
            ransom[ransomNote[i]]++;
        }
        for (int i=0;i<ransomNote.size();i++)
        {
            if (ransom.count(magazine[i])) {
                ransom[magazine[i]]--;
                if (ransom[magazine[i]]==0) ransom.erase(magazine[i]);
            }
        }
        return ransom.empty();
    }
};