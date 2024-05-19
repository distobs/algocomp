#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
	map<int, int> estoque;
	unsigned fabricados = 0;
	unsigned n;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		unsigned tmp = 0;
		cin >> tmp;

		if (estoque.find(tmp) == estoque.end() || estoque[tmp] == 0) {
			fabricados += 2;
			estoque[tmp] += 1;
		} else {
			--estoque[tmp];
		}
	}

	cout << fabricados << '\n';
	return 0;
}
