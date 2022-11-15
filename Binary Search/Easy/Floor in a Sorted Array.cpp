// Ques Link : https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%3BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] > x)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return s - 1;
}