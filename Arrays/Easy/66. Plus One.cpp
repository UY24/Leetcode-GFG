// Ques Link : https://leetcode.com/problems/plus-one/description/

#include <bits/stdc++.h>
using namespace std;
/*
    First we increment the first digit (last element) by 1,
    if it becomes 10 we make it 0 ans add 1 to the second
    digit.. until the last digit (first element), if it becomes
    10 we make it 1 and push_back a leading zero.
*/
vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size() - 1;
    for (int i = n; i >= 0; --i)
    {
        if (digits[i] == 9)
            digits[i] = 0;
        else
        {
            digits[i] += 1;
            return digits;
        }
    }
    digits.push_back(0);
    digits[0] = 1;
    return digits;
}