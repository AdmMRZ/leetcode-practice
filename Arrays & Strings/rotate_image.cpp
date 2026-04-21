#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows; rows = matrix.size();
        for (int i=0;i<rows;i++)
        {
            for (int j=i+1;j<rows;j++){
                int temp; temp=matrix[j][i];
                matrix[j][i]=matrix[i][j];
                matrix[i][j]=temp;
            }
        }
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<rows/2;j++)
            {
                int temp=matrix[i][rows-1-j];
                matrix[i][rows-1-j]=matrix[i][j];
                matrix[i][j]=temp;
            }
        }
    }
};