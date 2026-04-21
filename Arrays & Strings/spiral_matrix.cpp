#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int row=matrix.size(),column=matrix[0].size(),i=0;
        int left=0,right=0,up=0,down=0;
        while(i<row*column)
        {
            for (int i=0;i<column-right;i++)
            {
                res.push_back(matrix[right][i]);
            }
            right++;
            for (int i=right-1;i<row-down;i++)
            {
                res.push_back(matrix[i][column-right]);
            }
            down++;
            for (int i=column-1-left;i>=left;i--)
            {
                res.push_back(matrix[row-down][i]);
            }
            left++;
            for (int i=row-up-1;i>=up+1;i--)
            {
                res.push_back(matrix[i][column-left]);
            }
            up++;
        }
        return res;
    }
};