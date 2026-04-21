#include <iostream>
using namespace std;
#include <vector>   
#include <algorithm>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size() , column = matrix[0].size();
        int l = 0 , r = row * column - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (matrix[m/column][m%column] > target) r = m - 1;
            else if (matrix[m/column][m%column] < target) l = m + 1;
            else return true;
        }
        return false;
    }
};