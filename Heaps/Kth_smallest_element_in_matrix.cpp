#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size() , column = matrix.at(0).size();
        priority_queue <int , vector<int> , greater<>> pq;
        for (int i = 0 ; i < row ; i++)
        {
            for (int j = 0 ; j < column ; j++)
            {
                pq.push(matrix[i][j]);
            }
        }
        while (k--)
        {
            pq.pop();
        }
        return pq.top();
    }
};