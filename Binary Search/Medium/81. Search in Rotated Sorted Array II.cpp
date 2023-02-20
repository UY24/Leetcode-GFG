// Ques link : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/


// TC : O(log n) in worst case its O(n).

#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int s = 0, n = nums.size(), e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return true;

        /*  
            Blow line is used to handle duplicates and rest ques is same as leet code ques 33 
            ans link :https://github.com/UY24/Leetcode-GFG/blob/master/Binary%20Search/Medium/33.%20Search%20in%20Rotated%20Sorted%20Array.cpp
        */

        if ((nums[s] == nums[mid]) && (nums[e] == nums[mid]))
        {
            s++;
            e--;
        }
        else if (nums[s] <= nums[mid])
        { //  s to midd is sorted
            if (nums[mid] > target && nums[s] <= target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        else if (nums[e] >= nums[mid])
        { //  mid to e is sorted
            if (nums[mid] < target && nums[e] >= target)
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return false;
}