//http://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int num[(s.length()/2)+1], index(0);
 
    for(int i=0; i<s.length(); i++) {
        if(i%2 == 0) {
            num[index] = (int)s[i] - 48;
            index++;
        }
    }
 
    sort(num, num+(s.length()/2)+1);
 
    string ans;
 
    index = 0;
 
    for(int i=0; i<s.length(); i+=2) {
        ans += to_string(num[index]);
        ans += '+';
        index++;
    }
 
    ans.pop_back();
 
    cout << ans << "\n";
}