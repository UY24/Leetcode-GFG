// Ques link : https://leetcode.com/problems/find-peak-element/

#include <bits/stdc++.h>
using namespace std;

// linear approach  TC O(N)
int findPeakElement(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            return i;
    }
    return nums.size() - 1;
}

// Binary Search Approach
int findPeakElement(vector<int> &nums)
{
    int s = 0, n = nums.size(), e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (mid == 0)
            return nums[0] >= nums[1] ? 0 : 1;
        if (mid == n - 1)
            return nums[n - 1] >= nums[n - 2] ? (n - 1) : (n - 2);
        if ((nums[mid] >= nums[mid - 1]) && (nums[mid] >= nums[mid + 1]))
            return mid;
        else if (nums[mid] < nums[mid - 1])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return s;
}