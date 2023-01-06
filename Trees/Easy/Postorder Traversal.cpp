// Ques Link : https://practice.geeksforgeeks.org/problems/postorder-traversal/1

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
void post(Node *root)
{
    if (root == NULL)
        return;
    else
    {
        post(root->left);
        post(root->right);
        arr.push_back(root->data);
    }
    return;
}

vector<int> postOrder(Node *root)
{
    post(root);
    vector<int> fans = arr;
    arr.clear();
    return fans;
}