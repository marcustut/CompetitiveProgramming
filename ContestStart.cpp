// https://codeforces.com/contest/1539/problem/0
// Not passed yet
#include <bits/stdc++.h>
using namespace std;

// 0, x, 2x, 3x, 4x, ...
// t, t+x, t+2x, t+3x, t+4x, ...

// 5, 7, 9, 11

int main()
{
	int k;
	cin >> k;

	while (k--)
	{
		int n, x, t;
		cin >> n >> x >> t;

		int score = 0;
		int last(0);

		for (int i = 0; i < n; i++)
		{
			int e = x * i + t;
			if (last <= x * i)
			{
				for (int j = last; j < e; j += x)
				{
					if (j == 0 || j == last)
						continue;
					score++;
					last = j;
				}
			}
		}
		cout << score << "\n";
	}
}