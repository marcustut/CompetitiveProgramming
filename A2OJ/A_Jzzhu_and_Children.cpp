/*
ID: 85613328
Submitted Time: 01/07/2020 18:36
Problem: http://codeforces.com/problemset/problem/272/A
Lang: GNU C++14
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<pair<int,int>> a;
  for (int i=1; i<=n; i++) {
    int input;
    cin >> input;
    pair<int,int> x = {i, input};
    a.push_back(x);
  }

  int idx(0);

  while(a.size()) {
    if (a[0].second > 2) {
      a[0].second -= 2;
      a.push_back(a[0]);
      a.erase(a.begin());
    }
    else {
      a.erase(a.begin());
    }
  }

  cout << a[0].first << endl;
}