// Ques Link : https://practice.geeksforgeeks.org/problems/3-divisors3942/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int N)
    {
        if(N == 1 || N == 0)
            return 0;
        else if(N == 2 || N == 3)
            return 1;
        else if(N%2 == 0 || N%3 == 0)
            return 0;
        else
            for(int i = 5; i <= sqrt(N) ; i++)
                if(N % i == 0)
                    return 0;
        return 1;
    }
    
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector <int> ans ;
        for(int i = 0 ; i < query.size() ;i++)
        {
            int count = 0;
            for(int j = 2 ; j <= sqrt(query[i]) ; j++)
                if(isPrime(j))
                    count ++ ;
            ans.push_back(count);
        }
        return ans;
    }
};