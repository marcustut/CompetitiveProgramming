/*
ID: 77207855
Submitted Time: 19/04/2020 01:14
Problem: https://codeforces.com/contest/339/problem/A
Lang: GNU C++17
Verdict: Accepted
Time: 60ms
Memory: 0KB
*/
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