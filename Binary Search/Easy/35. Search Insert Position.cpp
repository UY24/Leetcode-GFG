// Ques Link : https://leetcode.com/problems/search-insert-position/

#include <bits/stdc++.h>
using namespace std;

// 1st approach

int searchInsert(vector<int> &nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e){
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            s = mid + 1;
        else if (target < nums[mid])
            e = mid - 1;
    }
    return s;
}

/* Because when e = s + 1, then mid = s.
If the target > nums[mid], then s = mid + 1 = e.
The target position can be s or e, since they are the same.
but if the target < nums[mid], then e = mid - 1 = s - 1.
The target position must be s, not the e.
eg.   [1,7] If we search for 0, the end point will be
    high low

If we need 4, when loop break,
[1,7]
high low

If the target is 8, pointers will stop at,
[1,7]
   high low

Hence, low is always at the search index position
*/

// 2nd approach

int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}
