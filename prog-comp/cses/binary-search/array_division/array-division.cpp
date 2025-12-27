// cses.fi/problemset/task/1085

#include <bits/stdc++.h>

using namespace std;

// diabólico, mas deu wrong answer por causa de overflow. diabo necessário.
#define int long long

// could we find a division in k subarrays?
int
could(vector<int> &v, int n, int m, int k)
{
	int nsub = 1;
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		sum += v[i];
		if (sum > m) {
			++nsub;
			sum = v[i];

			if (nsub > k) {
				return 0;
			}
		}
	}

	return 1;
}

int
solve(vector<int> &v, int n, int k, int l, int r)
{
	int m = (l + r) / 2;
	int last = r;

	while (l <= r) {
		if (could(v, n, m, k)) {
			last = m;
			r = m - 1;
		} else {
			l = m + 1;
		}

		m = (l + r) / 2;
	}

	return last;
}

signed
main(void)
{
	int n, k, l, r;

	cin >> n >> k;

	vector<int> v(n);

	cin >> v[0];
	l = r = v[0];

	for (int i = 1; i < n; ++i) {
		cin >> v[i];
		r += v[i];
		if (v[i] > l) {
			l = v[i];
		}
	}

	cout << solve(v, n, k, l, r) << "\n";

	return 0;
}
