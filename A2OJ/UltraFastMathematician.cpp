#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, m, ans;
    cin >> n >> m;

    for(int i=0;i<n.length();i++) {
        if((n[i] == '0' && m[i] == '0') || (n[i] == '1' && m[i] == '1'))
            ans += '0';
        else
            ans += '1';
}

    cout << ans << endl;
}