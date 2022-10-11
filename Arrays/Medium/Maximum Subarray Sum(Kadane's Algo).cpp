// ques link : https://leetcode.com/problems/maximum-subarray/
#include <bits/stdc++.h>
using namespace std;

// Brute Force TC O(N^2)

int maxSubArray(vector<int> &nums)
{
    int sum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int curSum = 0;
        for (int j = i; j < nums.size(); j++)
        {

            curSum += nums[j];
            sum = max(sum, curSum);
        }
    }
    return sum;
}

// Best Approach Kadane's Algo TC O(N) & SC O(N)

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int max_ele = INT_MIN;
    for (auto x : nums)
    {
        sum += x;
        max_ele = max(sum, max_ele);
        if (sum < 0)
            sum = 0;
    }
    return max_ele;
}