// Ques Link : https://practice.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

#include <bits/stdc++.h>
using namespace std;

int findKRotation(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (arr[s] < arr[e])
            return s;

        int mid = s + (e - s) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
            return mid;

        else if (arr[mid] >= arr[s])
            s = mid + 1;

        else
            e = mid - 1;
    }
    return 0;
}