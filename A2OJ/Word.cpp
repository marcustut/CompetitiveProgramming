#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int lowerCount = 0, upperCount = 0;

    for (char c : s) {
        if(c < 97) 
            upperCount += 1;
        else lowerCount += 1;
    }

    if(lowerCount > upperCount || upperCount == lowerCount) {
        for(char &c : s) {
            if(c < 97) {
                c = (char)(int)c + 32;
            }
        }
    } else {
        for(char &c : s) {
            if(!(c < 97)) {
                c = (char)(int)c - 32;
            }
        }
    }

    cout << s << endl;
}