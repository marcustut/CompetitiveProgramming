#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string code;

    string ans;

    cin >> code;

    for(int i=0;i<code.length();++i) {
        if(code[i] == '-' && code[i+1] == '-') {
            ans += '2';
            ++i;
        }
        else if(code[i] == '-' && code[i+1] == '.') {
            ans += '1';
            ++i;
        }
        else
            ans += '0';
    }

    cout << ans << "\n";
}