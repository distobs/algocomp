#include <bits/stdc++.h>

using namespace std;

bool
cmp(const string a, const string b)
{
	return a.length() < b.length();
}

int
main(void)
{
	string pal;
	int npal, linpag, carlin, pagusadas, linhasusadas, carusados, spc;

	while (cin >> npal >> linpag >> carlin) {
		linhasusadas = 1;
		carusados = 0;
		spc = 0;

		for (int i = 0; i < npal; ++i) {
			cin >> pal;

			carusados += pal.length() + spc;

			if (carusados > carlin) { // newline
				++linhasusadas;
				carusados = pal.length();
			}

			if (spc == 0) {
				spc = 1;
			}
		}

		pagusadas = ceil((double)linhasusadas / linpag);

		cout << pagusadas << endl;
	}

	return 0;
}
