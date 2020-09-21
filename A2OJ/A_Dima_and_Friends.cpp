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
    int n, f, total(0), answer(0);
    cin >> n;

    // For taking fingers input
    for (int i = 0; i < n; ++i) {
        cin >> f;
        total += f;
    }

    // Loop through 5 Fingers
    for (int i = 1; i <= 5; ++i) {
        // if total fingers(including Dima's) divide by total people(including Dima) is != 1 then Dima will not clean
        if ((total + i) % (n + 1) != 1)
        {
            // so since Dima will not clean, answer += 1
            answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}