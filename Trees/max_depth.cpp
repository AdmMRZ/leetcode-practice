#include <iostream>
#include <stack>
#include <queue>
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
    int maxDepth(TreeNode* root) {
        int maxL = 0 , maxR = 0;
        if (root == nullptr) return 0;
        else {
            maxL = 1 + maxDepth(root->left);
            maxR = 1 + maxDepth(root->right);
            return max(maxL , maxR);
        } 
    }
};