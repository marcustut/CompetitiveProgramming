//http://codeforces.com/problemset/problem/200/B
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