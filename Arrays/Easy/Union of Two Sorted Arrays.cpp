// ques link
// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays

// using map TC O((m+n)log(m+n))
// Space Complexity : O(m+n) If Space of ans Vector is considered. other wise O(1)

#include <bits/stdc++.h>
using namespace std;
vector < int > FindUnion(int arr1[], int arr2[], int n, int m) 
{
    map < int, int > freq;
    vector < int > ans;

    for (int i = 0; i < n; i++)
      freq[arr1[i]]++;

    for (int i = 0; i < m; i++)
      freq[arr2[i]]++;

    for (auto & it: freq)
      ans.push_back(it.first);

    return ans;
}

// Optimal Solution using 2 pointer time complexity o(m+n)
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0, j = 0; // pointers
        vector <int> ans; // final ans vector
        while (i < n && j < m) 
        {
            if (arr1[i] <= arr2[j]) // Case 1 and 2 when both are equ8al and arr1 is ledss than arr2
            {
              if (ans.size() == 0 || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
              i++;
            } 
            else // case 3
            {
              if (ans.size() == 0 || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
              j++;
            }
        }
        while (i < n) // IF any element left in arr1
        {
            if (ans.back() != arr1[i])
              ans.push_back(arr1[i]);
            i++;
        }
        while (j < m) // If any elements left in arr2
        {
            if (ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
        return ans;
    }
};
