/*
ID: 77252945
Submitted Time: 19/04/2020 16:02
Problem: https://codeforces.com/problemset/problem/236/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 200KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    set<char> set(s.begin(), s.end());

    if(set.size() % 2 == 0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";
}