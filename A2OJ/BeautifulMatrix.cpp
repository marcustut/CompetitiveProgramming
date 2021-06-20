#include <bits/stdc++.h>
using namespace std;

int main() {
    int input[5][5];

    int found_i, found_j;

    int ans;
    
    for(int i=0;i<5;++i)
        for(int j=0;j<5;++j) {
            cin >> input[i][j];
            if (input[i][j] == 1) {
                found_i = i+1;
                found_j = j+1;
            }
        }

    ans = abs(found_i - 3) + abs(found_j - 3);

    cout << ans << "\n";
}