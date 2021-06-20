#include <bits/stdc++.h>
using namespace std;

// Willliam's Answer
int main() {
  int t;
  cin >> t;

  for (int i=0; i<t; i++) {
    int n;
    cin >> n;
    // Do not have to consider n/2 because (n+1)/2 always return the lower integer.
    cout << (n+1)/2 << "\n";
  }
}

// Jury's Answer
int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    // if n is not even, (n+1)/2
    if (n % 2 != 0)
      cout << (n+1)/2 << "\n";
    // if n is even, n/2
    else
      cout << n/2 << "\n";
  }
}
