#include <bits/stdc++.h>

using namespace std;

int
partition(vector<int> &v, int beg, int end)
{
	int pivot = v[end];
	int i = beg - 1;

	for (int j = beg; j < end; ++j) {
		if (v[j] < pivot) {
			++i;
			swap(v[j], v[i]);
		}
	}

	++i;

	swap(v[i], v[end]);

	return i;
}

void
quicksort(vector<int> &v, int beg, int end)
{
	if (end <= beg) {
		return;
	}

	int pivot = partition(v, beg, end);

	quicksort(v, beg, pivot - 1);
	quicksort(v, pivot + 1, end);
}

int
main(void)
{
	vector<int> v = {9, 8, 7, 6, 5, 4, 2, 2, 100, 0xff, 2, 1, 0};

	quicksort(v, 0, v.size() - 1);

	for (int el : v) {
		cout << el << " ";
	}

	cout << endl;

	return 0;
}
