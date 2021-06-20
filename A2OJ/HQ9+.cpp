/*
ID: 77681158
Submitted Time: 23/04/2020 01:47
Problem: http://codeforces.com/problemset/problem/133/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (auto c : s) {
    if (c == 'H' || c == 'Q' || c == '9') {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";
}
