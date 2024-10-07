// OBI 2022 - Nível 2 - Questão D
// Solução com PREFIX SUM
// https://neps.academy/br/exercise/2072
#include <bits/stdc++.h>

using namespace std;

int
main(void)
{
	int size, target;

	cin >> size >> target;

	int list[size];

	for (int &el : list) {
		cin >> el;
	}

	int sum, res;
	unordered_map<int, int> pfx_count;

	sum = res = 0;

	pfx_count[0] = 1;

	for (int el : list) {
		sum += el;

		if (pfx_count.find(sum - target) != pfx_count.end()) {
			res += pfx_count[sum - target];
		}

		if (pfx_count.find(sum) != pfx_count.end()) {
			++pfx_count[sum];
		} else {
			pfx_count[sum] = 1;
		}
	}

	cout << res << endl;

	return 0;
}
