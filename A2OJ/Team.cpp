
/*
ID: 77684062
Submitted Time: 23/04/2020 02:18
Problem: http://codeforces.com/problemset/problem/231/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans=0;
  for(int i=0; i<n; i++) {
    int x, y, z;
    cin >> x >> y >> z;

    if (x==1 && y==1 || x==1 && z==1 || y==1 && z==1)
      ans++;
  }

  cout << ans << "\n";
}
