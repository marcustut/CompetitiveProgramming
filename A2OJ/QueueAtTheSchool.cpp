#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, t;
    string s;

    cin >> n >> t >> s;

    string ans = s;

    for(int i=0;i<t;++i) {
        for(int j=0;j<s.length();++j) {
            if(s[j]=='B' && s[j+1]=='G') {
                swap(ans[j],ans[j+1]);
            }
        }
        s = ans;
    }
    cout << ans << "\n";
}