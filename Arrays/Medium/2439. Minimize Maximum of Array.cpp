// Ques link : https://leetcode.com/problems/minimize-maximum-of-array/description/

#include <bits/stdc++.h>
using namespace std;

int minimizeArrayValue(vector<int> &nums)
{
    long ans = nums[0], total = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        total += nums[i];
        ans = max(ans, ((total + i) / (i + 1)));
        /*
            in this line we did the ceil func without using ceil function
            i.e ceil(a/b) = (a+b-1 / b)

            if we want to use ceil use ceil function
            ans = max(ans, ceil(double(total)/double(i+1)))
            since in C++, dividing integers results in an integer rather than a float
            thats why we type cast to double;
        */
    }
    return ans;
}