/*
ID: 77683272
Submitted Time: 23/04/2020 02:10
Problem: http://codeforces.com/problemset/problem/112/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  int s1v=0, s2v=0;

  for(int i=0; i<s1.length(); i++) {
    s1[i] = tolower(s1[i]);
    s2[i] = tolower(s2[i]);
    s1v = (int) s1[i];
    s2v = (int) s2[i];

    if (s1v < s2v) {
      cout << "-1\n";
      return 0;
    }
    if (s2v < s1v) {
      cout << "1\n";
      return 0;
    }
  }

  cout << "0\n";
}
