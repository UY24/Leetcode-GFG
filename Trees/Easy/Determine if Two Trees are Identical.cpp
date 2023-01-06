// Ques link : https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

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

bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
        return true;
    else if (r1 == NULL || r2 == NULL)
        return false;

    return ((r1->data == r2->data) && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right));
}