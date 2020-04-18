//http://codeforces.com/problemset/problem/248/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lcount=0, rcount=0, ans=0;

    for(int i=0;i<n;i++) {
        int l, r;
        cin >> l >> r;
        if(l == 1)
            lcount++;
        if(r == 1)
            rcount++;
    }

    if(lcount > n-lcount)
        ans += n-lcount;
    else
        ans += lcount;

    if(rcount > n-rcount)
        ans += n-rcount;
    else
        ans += rcount;

    cout << ans << "\n";
}