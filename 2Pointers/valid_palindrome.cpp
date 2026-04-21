#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while (left<=right)
        {
            while (left<right && !((s.at(left)>=48 && s.at(left)<=57) || (s.at(left)>=97 && s.at(left)<=122) || (s.at(left)>=65 && s.at(left)<=90)))
            {
                left++;
            }
            while (left<right && !((s.at(right)>=48 && s.at(right)<=57) || (s.at(right)>=97 && s.at(right)<=122) || (s.at(right)>=65 && s.at(right)<=90)))
            {
                right--;
            }
            if (tolower(s[left])!=tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
    }
};