// Ques Link : https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=first-and-last-occurrences-of-x

#include <bits/stdc++.h>
using namespace std;

// optimal approach using Binary Search O(log n)
vector<int> find(int arr[], int n, int x)
{
    vector<int> ans;
    int s = 0, e = n - 1;
    int si = -1, ei = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            si = mid;
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

    ans.push_back(si);
    s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            ei = mid;
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

    ans.push_back(ei);
    return ans;
}