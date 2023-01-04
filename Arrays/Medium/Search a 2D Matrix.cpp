// ques link : https://leetcode.com/problems/search-a-2d-matrix/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size(),
            cols = matrix[0].size(),
            i = 0, j = cols - 1;

        while (i < rows && j > -1)
        {
            int cur = matrix[i][j];
            if (cur == target)
                return true;
            if (target > cur)
                i++;
            else
                j--;
        }

        return false;
    }
};

// better approach

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int m = matrix.size(), n = matrix[0].size(), start, end, ele, mid;
        start = 0;
        end = n * m - 1;
        mid = start + (end - start) / 2;
        while (start <= end)
        {
            ele = matrix[mid / n][mid % n];
            if (ele == target)
                return true;
            if (ele > target)
                end = mid - 1;
            else
                start = mid + 1;
            mid = start + (end - start) / 2;
        }

        return false;
    }
};