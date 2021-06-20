#include <bits/stdc++.h>
using namespace std;

int main() {
    int input[10][10];

    int ans[10][10] = { { 1, 1, 1},
                      {1, 1, 1},
                      {1, 1, 1} };

    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            cin >> input[i][j];
            while(input[i][j]--) {
                if(ans[i][j] == 1) ans[i][j] = 0;
                else ans[i][j] = 1;

                if(ans[i][j+1] == 1) ans[i][j+1] = 0;
                else ans[i][j+1] = 1;

                if(ans[i+1][j] == 1) ans[i+1][j] = 0;
                else ans[i+1][j] = 1;

                if(ans[i][j-1] == 1) ans[i][j-1] = 0;
                else ans[i][j-1] = 1;
                
                if(ans[i-1][j] == 1) ans[i-1][j] = 0;
                else ans[i-1][j] = 1;
            }
        }
    }

    for(int i=0; i<3; ++i)
    { 
        for(int j=0; j<3; ++j)
            cout << ans[i][j];
        cout << "\n";
    }
}