// https://codeforces.com/problemset/problem/50/A
#include <bits/stdc++.h>
using namespace std;

// 0 0 0 0 0
// 0 0 0 0 0  <-- This is a 3x5 board, can fit seven 2x1 domino
// 0 0 0 0 0

// Put them all in one line and iterate at 2 steps each
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// until unable to iterate then count the steps, that's the answer

int board[16 * 16];

int main()
{
	int m, n;
	cin >> m >> n;

	int ans(0);

	// Fill the board with 1
	for (int i = 0; i < m * n; i++)
		board[i] = 1;

	// Iterate by 2 steps each
	for (int x = 0; x < m * n; x += 2)
		if (board[x + 1] != 0)
			ans++;

	cout << ans << "\n";
}