// ques link : https://leetcode.com/problems/max-consecutive-ones/
// TC O(n)
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentMax = 0 , finalMax = 0;
        for(auto x : nums)
        {
            if( x == 1)
                currentMax++;
            else
            {
                finalMax = max(currentMax , finalMax);
                currentMax = 0;
            }
        }
        
        finalMax = max(currentMax , finalMax);
        return finalMax;
    }
};