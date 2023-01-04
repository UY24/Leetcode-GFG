// ques link : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s

// Naive Approach
// TC O(M*N)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int res = -1;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (arr[j][i] == 1) // j = row  &  i = col
                    return j;
        return res;
    }
};

// Better Approach TC O(N+M)

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int i = 0, j = m - 1, ans = -1;
        while (i < n and j >= 0)
        {
            if (arr[i][j] == 1)
            {
                ans = i;
                j--;
            }
            if (arr[i][j] == 0)
            {
                i++;
            }
        }
        return ans;
    }
};
