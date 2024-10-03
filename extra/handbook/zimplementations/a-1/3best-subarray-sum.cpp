/* best subarray sum in O(n) */

#include <bits/stdc++.h>

using namespace std;

int
bsum(vector<int> &v)
{
	int best, sum;
	int n = v.size();

	best = sum = 0;

	for (int i = 0; i < n; ++i) {
		sum = max(v[i], sum + v[i]);
		best = max(best, sum);
	}

	return best;
}

int
main(void)
{
	int size;

	cin >> size;

	vector<int> v(size);

	for (int &el : v) {
		cin >> el;
	}

	cout << bsum(v) << endl;

	return 0;
}
