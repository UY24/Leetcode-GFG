// Ques Link : https://leetcode.com/problems/rearrange-array-elements-by-sign/
#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> p, n;

    for (auto x : nums)
    {
        if (x > 0)
            p.push_back(x);
        else
            n.push_back(x);
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums.push_back(p[i]);
        nums.push_back(n[i]);
    }

    return nums;
}