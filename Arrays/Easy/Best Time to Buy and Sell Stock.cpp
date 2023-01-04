// Ques Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int prof = 0;
    int min_ele = prices[0]; // or int min_ele = INT_MAX
    for (auto x : prices)
    {
        min_ele = min(x, min_ele);
        prof = max(prof, (x - min_ele));
    }
    return prof;
}