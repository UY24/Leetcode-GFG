// Ques Link : https://leetcode.com/problems/valid-anagram/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    unordered_map<char, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        mp[t[i]]--;
    }

    for (auto it : mp)
        if (it.second != 0)
            return false;
    return true;
}

// 2nd approach by comapring

bool isAnagram(string s, string t)
{

    int n = s.size();
    int q = t.size();

    if (s.size() != t.size())
        return false;

    unordered_map<char, int> mp;
    unordered_map<char, int> st;

    for (char c : s)
        mp[c]++;

    for (char c : t)
        st[c]++;

    for (int i = 0; i < s.length(); i++)
        if (mp[s[i]] != st[s[i]])
            return false;
    return true;
}