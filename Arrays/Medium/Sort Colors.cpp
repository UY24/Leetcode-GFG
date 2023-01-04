// ques link : https://leetcode.com/problems/sort-colors/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p=0, q=0, r=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) 
                p++;
            else if(nums[i]==1) 
                q++;
            else 
                r++;
        }
        int k=0;
        
        while(p--)
            nums[k++]=0;
        while(q--)
            nums[k++]=1;
        while(r--)
            nums[k++]=2;
        
    }
};