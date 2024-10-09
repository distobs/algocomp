#include <bits/stdc++.h>

using namespace std;

void
merge(vector<int> &v, vector<int> &left, vector<int> &right)
{
	int ln = left.size();
	int rn = right.size();

	int i, j, k;

	i = j = k = 0;

	while (j < ln && k < rn) {
		if (left[j] <= right[k]) {
			v[i++] = left[j++];
		} else {
			v[i++] = right[k++];
		}
	}

	while (j < ln) {
		v[i++] = left[j++];
	}

	while (k < rn) {
		v[i++] = right[k++];
	}
}

void
mergesort(vector<int> &v, int n) {
    if (n > 1) {
        int mid = n / 2;

        vector<int> left(mid);
	vector<int> right(n-mid);

	for (int i = 0; i < mid; ++i) {
		left[i] = v[i];
	}

	for (int i = mid; i < n; ++i) {
		right[i - mid] = v[i];
	}

	mergesort(left, mid);
	mergesort(right, n - mid);

	merge(v, left, right);
    }
}

int
main(void)
{
    int n;

    cin >> n;

    vector<int> v(n);

    for (int &el : v) {
        cin >> el;
    }

    mergesort(v, n);

    for (int el : v) {
        cout << el << " ";
    }

    cout << endl;

    return 0;
}
