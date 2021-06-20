// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		string x;
		cin >> x;
		if (x.length() > 10)
		{
			string::iterator last = x.end();
			last--;
			cout << *x.begin() << x.length() - 2 << *last << "\n";
		}
		else
		{
			cout << x << "\n";
		}
	}
}
