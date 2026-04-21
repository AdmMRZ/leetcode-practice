#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map <char,int> balloon; int lcount=0,ocount=0,res_key;
        balloon['b']=0; balloon['a']=0; balloon['l']=0; balloon['o']=0; balloon['n']=0;
        for (int i=0;i<text.size();i++)
        {
            if (balloon.count(text[i]))
            {
                if (text[i]=='l') lcount++;
                else if (text[i]=='o')ocount++;
                else balloon[text[i]]++;
                if (ocount==2) {
                    balloon[text[i]]++;
                    ocount=0;
                }
                else if (lcount==2){
                    balloon[text[i]]++;
                    lcount=0;
                }
            }
        }
        int minElement = balloon.begin()->second;
        for (const auto& pair : balloon) {
            if (pair.second < minElement) {
                minElement = pair.second;
            }
        }
        return minElement;
    }
};