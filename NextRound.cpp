// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int ans(0);
	vector<int> scores;

	while (n--)
	{
		int x;
		cin >> x;
		scores.push_back(x);
	}

	for (int s : scores)
		if (s >= scores[k - 1] && s > 0)
			ans++;

	cout << ans << "\n";
}