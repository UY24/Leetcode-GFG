// Ques link : https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

#include <bits/stdc++.h>
using namespace std;

// approach 1  TC O(n)

int count(int arr[], int n, int x)
{
    int ct = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            ct++;
    return ct;
}

// approach 2  TC O(log n)
int count(int arr[], int n, int x)
{
    int first = -1, last = -1;

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            first = mid;
            e = mid - 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    s = 0;
    e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            last = mid;
            s = mid + 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    int ans = 0;
    if (first != -1 and last != -1)
    {
        ans = last - first + 1;
        return ans;
    }
    return ans;
}

// approach 3 using upper bound and lower bound

int count(int arr[], int n, int x)
{

    int *lo = lower_bound(arr, arr + n, x); // get the index of first occurrence of x

    if (lo == (arr + n) || *lo != x) // if element is not present we return 0 , we dont go any furthur
        return 0;

    int *up = upper_bound(arr, arr + n, x); //  get the index of last occurrence of x
    return up - lo; // count
}