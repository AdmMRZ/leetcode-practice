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
    bool isValidBST(TreeNode* root) {
        vector <long long int> arr; inOrder(root , arr);

        for (int i = 1 ; i < arr.size() ; i++)
        {
            if (arr[i] < arr[i - 1]) return false;
        }
        return true;
    }
    void inOrder(TreeNode* node , vector<int>& arr)
    {
        if (node)
        {
            inOrder(node->left);
            arr.push_back(node->val);
            inOrder(node->right);
        }
    }
};