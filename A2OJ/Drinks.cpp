/*
ID: 77183454
Submitted Time: 19/04/2020 20:56
Problem: http://codeforces.com/problemset/problem/200/B
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 200KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, sum=0;
    cin >> n;

    for (int i=0; i<n; ++i) {
        double x;
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(12) << sum / n << "\n";
}