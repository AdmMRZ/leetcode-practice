#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector <int> arr; 
        inOrder(root , arr);
        
        int minDiff = INT_MAX , prev = 0;

        for (int i = 1 ; i < arr.size(); i++)
        {
            minDiff = min(minDiff , abs(arr[i] - arr[prev]));
            prev = i;
        }
        return minDiff;
    }

    void inOrder(TreeNode* node, vector<int>& arr) {
        if (node) {
            inOrder(node->left, arr);  
            arr.push_back(node->val);   
            inOrder(node->right, arr); 
        }
    }
};