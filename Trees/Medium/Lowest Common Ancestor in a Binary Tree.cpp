// Ques Link : https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node()
    {
        data = 0;
        left = right = NULL;
    }
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node *lca(Node *root, int n1, int n2)
{
    if (root == NULL)
        return root;
    if (root->data == n1 || root->data == n2)
        return root;

    Node *leftside = lca(root->left, n1, n2);
    Node *rightside = lca(root->right, n1, n2);

    if (leftside != NULL && rightside != NULL)
        return root;

    else if (leftside != NULL)
        return leftside;

    else
        return rightside;
}