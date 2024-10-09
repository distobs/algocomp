/* Best subarray sum in O(n^2) */
#include <bits/stdc++.h>

using namespace std;

int
bsum(vector<int> &v)
{
	int n = v.size();
	int best = 0;
	int sum;

	for (int i = 0; i < n; ++i) {
		int sum = 0;
		for (int j = i; j < n; ++j) {
			sum += v[j];
			best = max(best, sum);
		}
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
