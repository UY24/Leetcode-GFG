// Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(n)
#include <bits/stdc++.h>
using namespace std;
vector<int> printIntersection(int arr1[], int arr2[], int n, int m)
{
    vector <int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
                break;
            }
        }
    }
    return ans;
}

// Better Solution
// Time Complexity: O(n)
// Space Complexity: O(n)
#include <bits/stdc++.h>
using namespace std;
vector<int> printIntersection(int arr1[], int arr2[], int n, int m)
{
    map <int, int> freq;
    vector <int> ans;
    for (int i = 0; i < n; i++)
        freq[arr1[i]]++;
    for (int i = 0; i < m; i++)
        freq[arr2[i]]++;
    for (auto it: freq)
        if (it.second > 1)
            ans.push_back(it.first);
    return ans;
}

int main()
{
    int n = 8, m = 6;
    int arr1[] = {1, 2 , 3 , 3 , 4 , 5 , 6 , 7};
    int arr2[] = {3 , 3 , 4 , 4, 5 , 8};
    vector <int> intersection = printIntersection(arr1, arr2, n, m);
    cout << "intersection of arr1 and arr2 is " << endl;
    for (auto val : intersection)
        cout << val << " ";
    return 0;
}



// 2 Pointer approach
// Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector <int> A {1,2,3,3,4,5,6,7};
    vector <int> B {3,3,4,4,5,8};
    vector <int> ans;
    int i = 0, j = 0; // to traverse the arrays
    while (i < A.size() && j < B.size()) 
    {
        if (A[i] < B[j]) // if current element in i is smaller
            i++;
        else if (B[j] < A[i])
            j++; 
        else 
        {
            ans.push_back(A[i]); // both elements are equal
            i++;
            j++;
        }
    }
    cout<<"The elements are: ";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
