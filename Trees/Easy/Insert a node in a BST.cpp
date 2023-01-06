// Ques Link : https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int Key)
{
    if (root == NULL)
    {
        Node *temp = new Node(Key);
        return temp;
    }
    if (root->data == Key)
        return root;
    if (root->data > Key)
        root->left = insert(root->left, Key);
    else
        root->right = insert(root->right, Key);
    return root;
}