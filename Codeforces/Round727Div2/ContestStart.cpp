// https://codeforces.com/contest/1539/problem/0
// Explanation: https://www.youtube.com/watch?v=WqCOm_gF2AM
// Haven't know why it works yet, need finding out
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// 0, x, 2x, 3x, 4x, ...
// t, t+x, t+2x, t+3x, t+4x, ...

// 5, 7, 9, 11

// int main()
// {
// 	int k;
// 	cin >> k;

// 	while (k--)
// 	{
// 		int n, x, t;
// 		cin >> n >> x >> t;

// 		int score = 0;
// 		int last(0);

// 		for (int i = 0; i < n; i++)
// 		{
// 			int e = x * i + t;
// 			if (last <= x * i)
// 			{
// 				for (int j = last; j < e; j += x)
// 				{
// 					if (j == 0 || j == last)
// 						continue;
// 					score++;
// 					last = j;
// 				}
// 			}
// 		}
// 		cout << score << "\n";
// 	}
// }

int main()
{
	int k;
	cin >> k;

	while (k--)
	{
		ll n, x, t;
		cin >> n >> x >> t;

		// If time to finish is smaller than interval then
		// no participant will overlap hence no dissastisfaction score
		if (t < x)
		{
			cout << 0 << "\n";
			continue;
		}

		//
		ll first = t / x;
		if (first >= n - 1)
		{
			ll ans = n - 1;
			ans = (ans * (ans + 1)) / 2;
			cout << ans << "\n";
		}
		else
		{
			ll ans1 = (first * (first + 1)) / 2;
			ll ans2 = (n - 1 - first) * first;
			cout << ans1 + ans2 << "\n";
		}
	}
}