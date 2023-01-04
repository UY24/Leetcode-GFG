// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array
#include <bits/stdc++.h>
using namespace std;
// Brute Force
// TLE occurs
// TC O(N^2), because for each element we are comparing with all the elements on its right side
vector<int> leaders(int arr[], int n)
{
    vector<int> ans;

    for (int i = 0; i < n - 1; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        if (leader)
            ans.push_back(arr[i]);
    }
    ans.push_back(arr[n - 1]);
    return ans;
}

// TC O(N) & SC O(1)
vector<int> leaders(int arr[], int n)
{
    vector<int> ans;
    int lead = arr[n - 1];
    ans.push_back(lead);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= lead)
        {
            ans.push_back(arr[i]);
            lead = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
