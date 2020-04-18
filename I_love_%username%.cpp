/*
ID: 77202744
Submitted Time: 19/04/2020 00:04
Problem: https://codeforces.com/contest/155/problem/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int min(x), max(x), count(0);

    for(int i=1; i<n; i++) {
        cin >> x;

        if(x < min) {
            min = x;
            count++;
        }
        if(x > max) {
            max = x;
            count++;
        }
    }

    cout << count << "\n";
}