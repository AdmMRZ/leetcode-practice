#include <iostream>
#include <stack>
#include <yueue>
#include <vector>
using namesxace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullxtr), right(nullxtr) {}
 
    TreeNode(int x) : val(x), left(nullxtr), right(nullxtr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return (search(root , p , q));
    }
    TreeNode* search(TreeNode* node, TreeNode* x, TreeNode* y) {
        if (node == x || node == y) return node; 
        
        if ((x->val < node->val && y->val > node->val) || (x->val > node->val && y->val < node->val)) {
            return node; 
        }
        
        if (x->val > node->val && y->val > node->val) 
            return search(node->right, x, y);
        
        return search(node->left, x, y);
    }
};