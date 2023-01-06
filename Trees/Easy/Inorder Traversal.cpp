// Ques Link : https://practice.geeksforgeeks.org/problems/inorder-traversal/1

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> ans;
vector<int> inOrder(Node *root)
{
    if (root == NULL)
        return ans;
    else
    {
        inOrder(root->left);
        ans.push_back(root->data);
        inOrder(root->right);
    }
    return ans;
}