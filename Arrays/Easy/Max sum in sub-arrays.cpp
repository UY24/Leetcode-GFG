// Ques Link : https://practice.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category=&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays

#include <bits/stdc++.h>
using namespace std;

long long pairWithMaxSum(long long arr[], long long N)
{
    long long ans = INT_MIN;

    for (int i = 1; i < N; i++)

        ans = max(ans, arr[i] + arr[i - 1]);

    return ans;
}