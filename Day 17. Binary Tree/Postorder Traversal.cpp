#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
     vector<int> nodes;
    stack<TreeNode*> todo;
    TreeNode* last = NULL;
    while (root || !todo.empty()) {
        if (root) {
            todo.push(root);
            root = root -> left;
        } else {
            TreeNode* node = todo.top();
            if (node -> right && last != node -> right) {
                root = node -> right;
            } else {
                nodes.push_back(node -> data);
                last = node;
                todo.pop();
            }
        }
    }
    return nodes;
}
