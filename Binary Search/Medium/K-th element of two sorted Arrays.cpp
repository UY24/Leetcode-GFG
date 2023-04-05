// Ques Link : https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array

#include <bits/stdc++.h>
using namespace std;

// Naive Approach
int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(arr1[i]);

    for (int j = 0; j < m; j++)
        v.push_back(arr2[j]);

    sort(v.begin(), v.end());
    return v[k - 1];
}

// Optimized Approach
