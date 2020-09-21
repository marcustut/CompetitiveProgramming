#include <bits/stdc++.h>
using namespace std;

void william();
void jury();

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long n, r, ans;
    cin >> n >> r;

    if (r < n) 
      ans = r * (r+1)/2;
    else
      ans = (n * (n+1)/2) - (n-1);

    cout << ans << "\n";
  }
}

// William's Answer

void william() {
  int t;
  cin >> t;
  for(int i=0; i<t; i++) {
    long long n, r;
    cin >> n >> r;
    long long ans = min(n,r) * (min(n,r)+1) / 2;
    if (r >= n)
      ans -= n-1;
    cout << ans << "\n";
  }
}

// Jury's Answer

void jury() {
  long long n, l=1, r, t, res;
  cin >> t;

  while(t--) {
    res = 0;
    
    cin >> n >> r;
    
    if (n <= l) {
      cout << 1 << "\n";
      continue;
    }

    if (n <= r) {
      r = n-1;
      res = 1;
    }

    cout << res + ((l+r)*(r-l+1))/2 << "\n";
  }
}