#include <bits/stdc++.h>

using namespace std;

int
main(void)
{
	string needle, haystack;

	while (cin >> needle >> haystack) {
		int found = 0;
		int needleIndex = 0;

		if (needle.length() > haystack.length()) {
			cout << "No" << endl;
			continue;
		}

		for (int i = 0; i < haystack.length(); ++i) {
			if (needle[needleIndex] == haystack[i]) {
				++needleIndex;

				if (needleIndex == needle.length()) {
					found = 1;
					break;
				}
			}
		}

		cout << ((found) ? "Yes" : "No") << endl;
	}

	return 0;
}
