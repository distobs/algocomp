#include <bits/stdc++.h>

#define int long long
using namespace std;

signed
main(void)
{
	int n, watch, work, tmp;

	cin >> n;

	while (n != 0) {
		work = watch = 0;

		for (int i = 0; i < n; ++i) {
			cin >> tmp;
			watch += tmp;
			work += abs(watch);
		}

		cout << work << endl;

		cin >> n;
	}

	return 0;
}
