/* incrivel q so da merda com o diabo do fsanitizer */
#include <bits/stdc++.h>

using namespace std;

int
main(void)
{
	int nrows;

	cin >> nrows;

	vector<vector<int>> triangle(nrows);

	triangle[0].push_back(1);
	triangle[1].push_back(1);
	triangle[1].push_back(1);

	for (size_t i = 2; i < nrows; ++i) {
		triangle[i].push_back(1);
		for (size_t j = 1; j <= i; ++j) {
			size_t tmp = triangle[i - 1][j] + triangle[i - 1][j - 1];
			triangle[i].push_back(tmp);
		}
	}

	for (vector<int> vec : triangle) {
		for (int elm : vec) {
			cout << elm << " ";
		}
		cout << "\n";
	}

	return 0;
}
