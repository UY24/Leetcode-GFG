// Ques Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

// Approach 1 TC O(N)

int search(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
            return i;
    }
    return -1;
}

// Approach 2 TC O(Log N)

int search(vector<int> &nums, int target)
{
    int s = 0, n = nums.size(), e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[s] <= nums[mid])
        { //  s to midd is sorted
            if (nums[mid] > target && nums[s] <= target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        else if (nums[e] >= nums[mid])
        { //  mid to e is sorted
            if (nums[mid] < target && nums[e] >= target)
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return -1;
}