// Ques Link : https://practice.geeksforgeeks.org/problems/majority-vote/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=majority-vote\

// TC O(N * log * N) using map

#include <bits/stdc++.h>
using namespace std;

vector<int> Solve(int n, vector<int> &nums)
{
    unordered_map<int, int> mp;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    for (auto x : mp)
    {
        if (x.second > n / 3)
            ans.push_back(x.first);
    }
    if (ans.size() == 0)
    {
        ans.push_back(-1);
        return ans;
    }
    sort(ans.begin(), ans.end());
    return ans;
}


