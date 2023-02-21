// Ques link : https://leetcode.com/problems/single-element-in-a-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int s = 0, n = nums.size(), e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if ((mid % 2 == 0 && nums[mid + 1] == nums[mid]) || (mid % 2 != 0 && nums[mid - 1] == nums[mid]))
        {
            s = mid + 1;
        }
        else
            e = mid;
    }
    return nums[s];
}