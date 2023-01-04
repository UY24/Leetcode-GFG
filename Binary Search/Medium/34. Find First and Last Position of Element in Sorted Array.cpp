// ques link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int x)
{
    vector<int> ans;
    int n = nums.size();
    int s = 0, e = n - 1;
    int si = -1, ei = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == x)
        {
            si = mid;
            e = mid - 1;
        }
        else if (nums[mid] < x)
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
        if (nums[mid] == x)
        {
            ei = mid;
            s = mid + 1;
        }
        else if (nums[mid] < x)
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