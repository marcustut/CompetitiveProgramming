/*
ID: 77678286
Submitted Time: 23/04/2020 01:16
Problem: http://codeforces.com/contest/141/problem/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b, c, s;
  cin >> a >> b >> c;

  s = a + b;

  sort(s.begin(), s.end());
  sort(c.begin(), c.end());

  if (s == c)
    cout << "YES\n";
  else
    cout << "NO\n";
}
