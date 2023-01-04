// ques link : https://leetcode.com/problems/single-number/

// O(NLog N) Time and O(1) Space
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1;)
    {
        if (nums[i + 1] != nums[i])
            return nums[i];
        else
            i += 2;
    }
    return nums[nums.size() - 1];
}

// better solution using hash map
// TC O(N)

int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (auto x : nums)
    {
        mp[x]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
        if (i->second == 1)
            return i->first;
    return 0;
}

// XOR approach
// when we XOR all the numbers in the list, all the numbers that occur 2 times become 0 
// as x^x = 0. At the end, we will be left with an expression like 0^ans, 
// where ans is the only number occurring once.

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int x : nums)
        ans ^= x;
    return ans;
}