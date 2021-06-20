#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    for(int i=2;i<x;i++) {
        if(x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    string ans;
    int count=0;

    if(isPrime(n) && isPrime(m)) {
        for(int i=n+1;i<m;i++) {
            if(isPrime(i))
                count++;
        }
        if(count == 0) ans = "YES";
        else ans = "NO";
    } else ans = "NO";


    cout << ans << "\n";
}