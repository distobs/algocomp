#include <bits/stdc++.h>

using namespace std;

#define int long long

constexpr int maxsiz = 2 * (int)1e5 + 1;

signed // valeu claudemir
main(void)
{
	int n, q;

	cin >> n >> q;

	int v[maxsiz] = {0};
	int s[maxsiz] = {0};

	// horripilante
	for (int i = 1; i <= n; ++i) {
		cin >> v[i];

		s[i] = v[i] + s[i - 1];
	}

	for (int i = 1; i <= q; ++i) {
		int l, r;

		cin >> l >> r;

		cout << s[r] - s[l - 1] << endl;
	}

	return 0;
}
