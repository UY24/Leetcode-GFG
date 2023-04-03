// Ques Link : https://leetcode.com/problems/boats-to-save-people/description/

/*
    Algo:
    sort the array
    we can send lightest and the heaviest together
    using 2 pointer i = lightest and j = heaviest
    traverse till i<=j
        if sum of lightest & heaviest person are under limit then both can go together , updating i & j both.
        if sum exceeds the limit, then heaviest person will go alone, hence updating only the j pointer.
        increment the count.

    return the count


    Analysis:
    TC O(n log n)
    SC O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int> &people, int limit)
{
    sort(people.begin(), people.end());
    int i = 0, j = people.size() - 1, count = 0;
    while (i <= j)
    {
        if (people[i] + people[j] <= limit)
        {
            i++;
            j--;
            count++;
        }
        else
        {
            j--;
            count++;
        }
    }
    return count;
}