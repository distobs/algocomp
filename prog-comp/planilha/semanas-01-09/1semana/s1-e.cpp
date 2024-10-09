#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int nr)
{
	vector<vector<int>> pascal(nr);

	for (int i = 0; i < nr; ++i) {
		pascal[i] = vector<int>(i + 1);
	}

	pascal[0][0] = 1;

	if (nr == 1) {
		return pascal;
	} else {
		pascal[1][0] = 1;
		pascal[1][1] = 1;
	}

	for (int i = 2; i < nr; ++i) {
		for (int j = 0; j < (i + 1); ++j) {
			if (j == 0 || j == i) {
				pascal[i][j] = 1;
			} else {
				pascal[i][j] = pascal[i-1][j-1] +
					pascal[i-1][j];
			}
		}
	}

	return pascal;
}
