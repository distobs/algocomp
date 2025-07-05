/* https://neps.academy/br/exercise/1725 */

#include <bits/stdc++.h>

using namespace std;

#define o (n - i - 1)

int
main(void)
{
	uint n;

	cin >> n;

	vector<uint> list(n);
	vector<uint> ok(n, 0);

	for (uint i = 0; i < n; ++i) {
		cin >> list[i];
	}

	for (uint i = 0; i < n; ++i) {
		if (list[i] == list[o]) {
			ok[i] = ok[o] = 1;
		} else {
			// completar
		}
	}

	return 0;
}
