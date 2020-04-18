//http://codeforces.com/problemset/problem/155/A
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