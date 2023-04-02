// Ques link: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/

#include <bits/stdc++.h>
using namespace std;

vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
{
    int n = spells.size();
    int m = potions.size();
    vector<int> ans(n, 0);
    sort(potions.begin(), potions.end());
    for (int i = 0; i < n; i++)
    {
        int sp = spells[i];
        int s = 0, e = m - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            long long res = (long long)sp * (long long)potions[mid];
            if (res >= success)
                e = mid - 1;
            else
                s = mid + 1;
        }
        ans[i] = m - s;
    }
    return ans;
}