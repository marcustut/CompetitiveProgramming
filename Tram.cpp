//http://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max(0), count(0);

    for(int i=0; i<n; i++) {
        int out, in;
        cin >> out >> in;

        count -= out;
        count += in;

        if(count > max)
            max = count;
    }

    cout << max << "\n";
}