// Ques link : https://leetcode.com/problems/removing-stars-from-a-string/

#include <bits/stdc++.h>
using namespace std;

// Approach:  using stack (not stack but stack like approach)
// TC O(N)
// SC O(N)

string removeStars(string s)
{
    string res;
    for (char c : s)
    {
        if (c == '*')
            res.pop_back();

        else
            res += c;
    }
    return res;
}