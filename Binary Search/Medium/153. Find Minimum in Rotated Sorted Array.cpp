// Ques Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    while (s < e)
    {
        if (nums[s] < nums[e]) // here if s < e that means the the array is sorted.
            return nums[s];

        int mid = s + (e - s) / 2;

        if (nums[s] <= nums[mid])
            s = mid + 1;
        else
            e = mid;
    }
    return nums[s];
}