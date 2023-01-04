// ques link: leetcode : https://leetcode.com/problems/missing-number/
// TC O(n)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        
        int total = nums.size()*(nums.size() + 1)/2; // total is the sum of all numbers in the array
        for (auto x : nums)
            sum += x; // add the number to the sum
        
        return total - sum; // return the difference between the sum and the total that is the missing number
    }
};


//ques link: GFG : https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends
int missingNumber(int A[], int N)
{
    int sum = 0;
    int total = N*(N+1)/2 ;
    for(int i = 0 ; i < N-1 ; i++)
        sum += A[i];
    return total - sum;
}