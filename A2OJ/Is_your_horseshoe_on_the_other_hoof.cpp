/*
ID: 77209427
Submitted Time: 19/04/2020 01:33
Problem: http://codeforces.com/problemset/problem/228/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 300KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n[4], dup(0);

    for (int i=0; i<4; i++) {
        cin >> n[i];
    }

    sort(n, n+4);

    for(int i=1; i<4; i++) {
        if(n[i] == n[i-1])
            dup++;
    }

    cout << dup << "\n";
}