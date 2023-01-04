// Ques Link : https://leetcode.com/problems/largest-perimeter-triangle/
// TC O(N * log * N)

#include <bits/stdc++.h>
using namespace std;

int largestPerimeter(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = nums.size() - 1; i > 1; i--)
    {
        if (nums[i] < nums[i - 1] + nums[i - 2])
            return nums[i] + nums[i - 1] + nums[i - 2];
    }

    return 0;
}