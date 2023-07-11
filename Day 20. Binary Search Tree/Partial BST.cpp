#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool checkBST(BinaryTreeNode<int>* root, int min, int max)
{
    if(root==NULL)
        return true;
    if(root->data>=min && root->data<=max)
        return checkBST(root->left,min,root->data)&&checkBST(root->right,root->data,max);
    else
        return false;
}

bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return checkBST(root,INT_MIN,INT_MAX);  
}
