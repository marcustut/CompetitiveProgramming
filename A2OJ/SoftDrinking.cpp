/*
ID: 77680120
Submitted Time: 23/04/2020 01:36
Problem: http://codeforces.com/problemset/problem/151/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int x[3];
  x[0] = k*l/nl;
  x[1] = c*d;
  x[2] = p/np;

  int min=x[0];
  for (int i=0; i<3; i++) {
    if (x[i] < min)
      min = x[i];
  }

  cout << min/n << "\n";
}
