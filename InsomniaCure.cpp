//http://codeforces.com/problemset/problem/148/A
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