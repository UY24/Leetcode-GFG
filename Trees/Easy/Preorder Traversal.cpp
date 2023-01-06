// Ques link : https://practice.geeksforgeeks.org/problems/preorder-traversal/1

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

vector<int> arr;
void preOrder(Node *root)
{
    if (root == NULL)
        return;
    else
    {
        arr.push_back(root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    return;
}

vector<int> preorder(Node *root)
{
    preOrder(root);
    vector<int> fans = arr;
    arr.clear();
    return fans;
}