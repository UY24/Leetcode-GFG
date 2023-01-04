// ques link : https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=majority-element
// ques link : https://leetcode.com/problems/majority-element/
// Naive Approach O(N^2)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    int maxCount = 0;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            ans = i;
        }
    }
    if (maxCount > size / 2)
        return a[ans];

    else
        return -1;
}

// Better Approach - Hash Map TC O(N) and SC O(N)

int majorityElement(int a[], int size)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
        mp[a[i]]++;
    for (auto x : mp)
    {
        if (x.second > size / 2)
        {
            return x.first;
            break;
        }
    }
    return -1;
}

// Best Approach - Moore’s Voting Algorithm TC O(N) SC O(1)

int majorityElement(vector<int> &nums)
{
    int count = 0;
    int cand = 0;

    for (auto x : nums)
    {
        if (count == 0)
            cand = x;
        if (x == cand)
            count++;
        else
            count--;
    }

    return cand;
}