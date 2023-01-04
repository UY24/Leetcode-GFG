// Ques Link : https://leetcode.com/problems/contains-duplicate/

#include <bits/stdc++.h>
using namespace std;

/*
one liner
if nums has an duplicate element then
its size will be more than set so will
return true otherwise False
*/

bool containsDuplicate(vector<int> &nums)
{
    return nums.size() > set<int>(nums.begin(), nums.end()).size();
}

// TC O(n log n)

bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}

// TC O(n)

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> se;
    for (int i = 0; i < nums.size(); i++)
    {
        if (se.count(nums[i]))
            return true;
        se.insert(nums[i]);
    }
    return false;
}
