/*
ID: 77711412
Submitted Time: 23/04/2020 12:25
Problem: http://codeforces.com/problemset/problem/282/A
Lang: GNU C++17
Verdict: Accepted
Time: 31ms
Memory: 0KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans=0;
    cin >> n;
    string s;
    
    bool operation;
    for (int i=0; i<n; i++) {
        cin >> s;
        for (auto c : s) {
            if (c == 'X')
                continue;
            else if (c == '+')
                operation = 1;
            else
                operation = 0;
        }

        if (operation == 1)
            ans += 1;
        else
            ans -= 1;
    }

    cout << ans << "\n";
}