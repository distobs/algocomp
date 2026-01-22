#include <bits/stdc++.h>

using namespace std;

int
main(void)
{
	int ntest;

	cin >> ntest;

	for (int i = 0; i < ntest; ++i) {
		int nprices;
		int disc = 0;

		cin >> nprices;

		vector<int> prices(nprices);

		for (int j = 0; j < nprices; ++j) {
			cin >> prices[j];
		}

		sort(prices.begin(), prices.end(), greater<int>());

		for (int j = 2; j < nprices; j += 3) {
			if (j < nprices) disc += prices[j];
		}

		cout << disc << endl;
	}

	return 0;
}
