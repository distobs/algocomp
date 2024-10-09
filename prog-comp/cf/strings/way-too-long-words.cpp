// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int
main(void)
{
	int n, size;

	cin >> n;

	string s;

	for (int i = 0; i < n; ++i) {
		cin >> s;
		size = s.size();

		if (size > 10) {
			cout << s[0] << size - 2 << s[size - 1] << endl;
		} else {
			cout << s << endl;
		}
	}

	return 0;
}
