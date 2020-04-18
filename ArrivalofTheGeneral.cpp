#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x; 

    int max(x), min(x);
    int maxp(0), minp(0);

    for (int i=1; i<n; i++) {
        cin >> x;
        if (x > max) {
            max = x;
            maxp = i;
        }
        else if (x <= min) {
            min = x;
            minp = i;
        }
    }

    if(maxp>minp)
        cout << (maxp-1) + (n-minp)-1;
    else
        cout << (maxp-1) + (n-minp);
    

    cout << "\n";
}