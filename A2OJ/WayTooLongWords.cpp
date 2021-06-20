/*
ID: 77251005
Submitted Time: 19/04/2020 15:38
Problem: https://codeforces.com/problemset/problem/71/A
Lang: GNU C++17
Verdict: Accepted
Time: 31ms
Memory: 200KB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string s = "", cs, ans;
        cin >> s;

        int count=0;

        cs = s;

        ans += cs[0];
        ans += cs.back();
        cs.pop_back();
        cs.pop_back();

        for(auto c : cs)
            count++;

        ans.insert(1, to_string(count));

        if (s.length() > 10)
            cout << ans << "\n";
        else
            cout << s << "\n";
        
    }
}