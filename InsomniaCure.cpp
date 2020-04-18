/*
ID: 77185648
Submitted Time: 19/04/2020 21:18
Problem: http://codeforces.com/problemset/problem/148/A
Lang: GNU C++17
Verdict: Accepted
Time: 62ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,l,m,n,d,count=0;
    cin >> k >> l >> m >> n >> d;

    for (int i=1; i<=d; ++i) {
        if (i%k != 0 && i%l != 0 && i%m != 0 && i%n != 0)
            continue;
        count++;
    }

    cout << count << "\n";
}