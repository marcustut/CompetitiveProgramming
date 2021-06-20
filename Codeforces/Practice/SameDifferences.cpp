// https://codeforces.com/problemset/problem/1520/D
// Explaination: https://www.youtube.com/watch?v=OLYAB8r_7xU
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// aj - ai = j - i
// aj - j = ai - i

// int main()
// {
// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;

// 		int arr[n];

// 		for (int i = 0; i < n; i++)
// 			cin >> arr[i];

// 		int ans(0);

// 		for (int i = 0; i < n; i++)
// 		{
// 			for (int j = 0; j < n; j++)
// 			{
// 				if ((arr[i] < arr[j]) && (arr[j] - arr[i] == arr[arr[j]] - arr[arr[i]]))
// 					ans++;
// 			}
// 		}

// 		cout << ans << "\n";
// 	}
// }

int main()
{
	ll t;
	cin >> t;

	while (t--)
	{
		ll n;
		cin >> n;

		map<ll, ll> mp;
		ll ans = 0;

		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			ans += mp[x - i];
			mp[x - i]++;
		}

		cout << ans << "\n";
	}
}