#include <bits/stdc++.h>
using namespace std;

bool hasDup(string year) {
    for(int i=0;i<year.length();i++) {
        int count = 0;
        for(int j=i+1;j<year.length();j++) {
            if(year[i] == year[j]) {
                count++;
            }
        }
        if(count>0)
            return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int year;

    cin >> year;

    year++;

    while(hasDup(to_string(year))) {
        year++;
    }

    cout << year << "\n";
}