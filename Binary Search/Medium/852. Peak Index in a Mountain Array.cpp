// Ques Link : https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

// TC O(log n)

#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int s = 0, e = n - 1, mid;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}