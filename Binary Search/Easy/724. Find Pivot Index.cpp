// Ques Link : https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan&id=level-1

// Here first we make 2 var lsum for left sum and rsum for right sum and in lsum we store 0 as in starting there is no left 
// variable and in rsum we store the whole sum of nums eg. [1 7 3 6 5 6] at 0th position the r sum will be rsum -1 
// then we check lsum and rsum are equal or not and if they are equal then we return the index of pivot if not then 
// we increment the lsum with 1 and thus check for next position till lsum == rsum if not we return -1


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum = 0;
        int rsum = 0;
        for(int i = 0 ; i < nums.size() ; i ++)
            rsum += nums[i];

        for(int i = 0 ; i < nums.size() ; i ++)
        {
            rsum -= nums[i];
            if(lsum == rsum)
                return i;
            lsum += nums[i];
        }
        return -1;
    }
};