// https://codeforces.com/problemset/problem/546/A
#include <bits/stdc++.h>
using namespace std;

// Arithmetic Progression problem
// k, 2k, 3k, ...

int main()
{
	double k, n, w;
	cin >> k >> n >> w;

	// Sum of AP formula: n/2[2a + (n-1)d]
	double price = (w / 2) * ((2 * k) + ((w - 1) * k));

	if (n >= price)
		cout << 0 << "\n";
	else
		cout << (int)(price - n) << "\n";
}