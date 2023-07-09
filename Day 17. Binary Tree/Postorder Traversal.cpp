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
     vector<int> postorder;
    stack<TreeNode*> st;
    TreeNode* curr = root;

    while (curr!= NULL || !st.empty())
     {
        if (curr!= NULL) {
            st.push(curr);
            curr = curr -> left;
        } 
        else
         {
            TreeNode* tmp = st.top()->right;
            
            if (tmp==NULL) 
                {
                     tmp=  st.top();
                      st.pop();
                      postorder.push_back(tmp->data);

                    while(!st.empty() && tmp== st.top()->right)
                        {
                            tmp= st.top();
                            st.pop();
                            postorder.push_back(tmp->data);
                        }
                }
            else {
                curr= tmp;
                }
         }
     }
    return postorder;
}
