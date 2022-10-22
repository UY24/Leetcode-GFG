// Ques Link : https://leetcode.com/problems/set-matrix-zeroes/
#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int rowsize = matrix.size();
    int columnsize = matrix[0].size();

    vector<int> row_ind(rowsize, 1);
    vector<int> col_ind(columnsize, 1);

    for (int i = 0; i < rowsize; i++) // loop to find which row and col has 0
    {
        for (int j = 0; j < columnsize; j++)
        {
            if (matrix[i][j] == 0)
            {
                row_ind[i] = 0;
                col_ind[j] = 0;
            }
        }
    }

    for (int i = 0; i < rowsize; i++) // loop to make row and col 0 by checking row_ind and col_ind
    {
        for (int j = 0; j < columnsize; j++)
        {
            if (row_ind[i] == 0 or col_ind[j] == 0)
                matrix[i][j] = 0;
        }
    }
}