// ques link : https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k
// TC O(n^2)

#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        int ml = 0; // max length
        for (int i = 0; i < N; i++)
        {
            int sum = 0;
            for (int j = 0; j < N; j++)
            {
                sum += A[j];

                if (sum == K)
                    ml = max(ml, j - i + 1);
            }
        }
        return ml;
    }
};
// Driver Code Starts.
int main()
{
    // code
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n, k) << endl;
    }
    return 0;
}

// Better Approach
// TC O(N) SC O(n)

int lenOfLongSubarr(int A[], int N, int k)
{
    unordered_map<int, int> mp;
    int sum = 0;
    int ml = 0; // max length
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        if (sum == k)
            ml = i + 1;

        if (mp.find(sum) == mp.end())
            mp[sum] = i;

        if (mp.find(sum - k) != mp.end())
        {
            if (ml < (i - mp[sum - k]))
                ml = i - mp[sum - k];
        }
    }
    return ml;
}

// Best Approch
// TC O(N)
// SC O(1)
// using 2 pointers Initialize sum = k, i and j.
// Simply increase j if the sum is less than k,
// compute the maximum if the sum is equal to k,
// and deduct the i th element from the sum if the sum is less than k.
// ********** THIS APPROACH WON’T WORK FOR NEGATIVE NUMBERS **********

int lenOfLongSubarr(int A[], int N, int K)
{

    int i = 0, j = 0, sum = 0;
    int ml = INT_MIN;

    while (j < N)
    {
        sum += A[j];
        if (sum < K)
            j++;
        else if (sum == K)
        {
            ml = max(ml, j - i + 1);
            j++;
        }
        else if (sum > K)
        {
            while (sum > K)
            {
                sum -= A[i];
                i++;
            }
            if (sum == K)
                ml = max(ml, j - i + 1);
            j++;
        }
    }
    return ml;
}