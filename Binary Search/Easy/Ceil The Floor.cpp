// Ques Link : https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair <int , int> pans;
    int c = -1 , f = -1;
    sort(arr,arr+n);
    
    int st = 0;
    int end = n-1;
    
    while(st <= end)
    {
        int mid = st + (end -st) / 2;
        if(arr[mid] == x)
        {
            c = arr[mid];
            f = arr[mid];
            break;
        }
        else if(arr[mid] < x)
        {
            f=arr[mid];
            st=mid+1;
        }
        else
        {
            c = arr[mid];
            end = mid-1;
        }
    }
    pans.first = f;
    pans.second = c;
    
    return pans;
}