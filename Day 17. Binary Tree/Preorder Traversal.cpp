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
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    stack<TreeNode*> st;
    vector<int> result;
    //base case
    if(root==NULL)
        return result;
        
    st.push(root);
    while(!st.empty())
    {
        TreeNode* node= st.top();
        result.push_back(node->data);
        st.pop();
        
        if(node->right)
            st.push(node->right);
        if(node->left)
            st.push(node->left);
    }
    return result;
}
