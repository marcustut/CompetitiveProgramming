/*
ID: 85502899 
Submitted Time: 30/06/2020 11:11AM
Problem: http://codeforces.com/problemset/problem/227/B
Lang: GNU C++14
Verdict: Accepted
Time: 31ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  int n, a, index[100000];
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> a;
    index[a] = i;
  }

  int m, b;
  ll Vasya(0), Petya(0);
  cin >> m;

  while (m--) {
    cin >> b;
    Vasya += index[b];
    Petya += n + 1 - index[b];
  }

  cout << Vasya << " " << Petya << "\n";

  return 0;
}
