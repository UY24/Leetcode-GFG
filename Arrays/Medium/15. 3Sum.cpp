// Ques Link : https://leetcode.com/problems/3sum/

#include <bits/stdc++.h>
using namespace std;

// Brute Force TC N^3 log m (m for putting data in set)

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;
    sort(nums.begin(), nums.end());
    int i, j, k;
    for (i = 0; i < nums.size() - 2; i++)
    {
        for (j = i + 1; j < nums.size() - 1; j++)
        {
            for (k = j + 1; k < nums.size(); k++)
            {

                temp.clear();
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    
                    ans.push_back(temp);
                }
            }
        }
    }

    return ans;
}

// Better Approach 