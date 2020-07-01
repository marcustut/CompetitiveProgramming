#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count=0;

    for(char c : n) {
        if(c == '7' || c == '4')
            count++;
    }

    if(count == 7 || count == 4) {
        if(count != 0)
            cout << "YES" << "\n";
        else cout << "NO" << "\n";
    } else cout << "NO" << "\n";
}