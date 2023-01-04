// ques link : https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-a-matrix

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int matSearch(vector<vector<int>> &mat, int N, int M, int X)
    {
        int i = 0;
        int j = M - 1;

        while (j >= 0 && i < N)
        {

            if (mat[i][j] == X)
                return true;

            else if (X > mat[i][j])
                i++;

            else
                j--;
        }

        return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        int x;
        cin >> x;
        Solution ob;
        cout << ob.matSearch(arr, n, m, x) << endl;
    }
}