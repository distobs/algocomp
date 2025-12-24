#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int
solve(vector<ll> &stalls, ll nstalls, ll ncows)
{
	ll min_dist = 1;
	ll max_dist = stalls[nstalls - 1] - stalls[0];
	ll mid_dist = (max_dist + min_dist) / 2;
	ll candidate = 0;

	while (min_dist <= max_dist) {
		ll placed = 1;
		ll lstpos = 0;
		for (ll i = 1; i < nstalls; ++i) {
			if (stalls[i] - stalls[lstpos] >= mid_dist) {
				++placed;
				lstpos = i;
				if (placed == ncows) {
					candidate = mid_dist;
					min_dist = mid_dist + 1;
					break;
				}
			}
		}

		if (placed < ncows) {
			max_dist = mid_dist - 1;
		}

		mid_dist = (min_dist + max_dist) / 2;
	}

	return candidate;
}

int
main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll ntest;

	cin >> ntest;

	for (ll i = 0; i < ntest; ++i) {
		ll nstalls, ncows;

		cin >> nstalls >> ncows;

		vector<ll> stalls(nstalls);

		for (ll j = 0; j < nstalls; ++j) {
			cin >> stalls[j];
		}

		sort(stalls.begin(), stalls.end());

		cout << solve(stalls, nstalls, ncows) << '\n';
	}

	return 0;
}
