// ques link : https://leetcode.com/problems/subarray-sum-equals-k/

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        int sum = 0, result = 0;
        mp[sum] = 1;
        
        for ( auto x : nums)
        {
            sum += x;
            result += mp[sum - k];
            mp[sum]++;
        }
        return result;
    }