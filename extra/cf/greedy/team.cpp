// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

using namespace std;

int
main(void)
{
	int n, tmp, tc = 0, qc = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> tmp;
			if (tmp) {
				++tc;
			}
		}

		if (tc >= 2) {
			++qc;
		}

		tc = 0;
	}

	cout << qc << endl;

	return 0;
}
