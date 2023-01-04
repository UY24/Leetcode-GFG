// Ques Link : https://leetcode.com/problems/longest-consecutive-sequence/
#include <bits/stdc++.h>
using namespace std;

// Brute Force TC O(N^3)
int longestConsecutive(vector<int> &nums)
{
    int max_len = 0;
    for (int x : nums)
    {
        int curr_num = x;
        int curr_len = 1;
        while (find(nums.begin(), nums.end(), curr_num + 1) != nums.end())
        {
            curr_num++;
            curr_len++;
        }
        max_len = max(max_len, curr_len);
    }
    return max_len;
}

// Better Approach TC O(N^2) using brute force - hash-set
int longestConsecutive(vector<int> &nums)
{
    int max_len = 0;
    unordered_set<int> num_set(nums.begin(), nums.end());
    for (int num : nums)
    {
        int curr_num = num;
        int curr_len = 1;
        while (num_set.find(curr_num + 1) != num_set.end())
        {
            curr_num++;
            curr_len++;
        }
        max_len = max(max_len, curr_len);
    }
    return max_len;
}

// better Approach TC O(N log N) & SC O(1)
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    sort(nums.begin(), nums.end());

    int longest = 0, cur_longest = 1;

    for (int i = 1; i < nums.size(); i++)
        if (nums[i] == nums[i - 1])
            continue;
        else if (nums[i] == nums[i - 1] + 1)
            cur_longest++;
        else
        {
            longest = max(longest, cur_longest);
            cur_longest = 1;
        }
    return max(longest, cur_longest);
}