#include <bits/stdc++.h>

using namespace std;

void
bubblesort(vector<int> &v)
{
	int n = v.size();

	bool swapped;

	/* n - 1 iterations are enough */
	for (int i = 0; i < n - 1; ++i) {
		swapped = false;
		for (int j = 0; j < n - 1; ++j) {
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j+1]);
				swapped = true;
			}
		}

		if (!swapped) {
			return;
		}
	}
}

int
main(void)
{
	int n;

	cin >> n;

	vector <int> v(n);

	for (int &el : v) {
		cin >> el;
	}

	bubblesort(v);

	for (int el : v) {
		cout << el << " ";
	}

	putchar('\n');

	return 0;
}
