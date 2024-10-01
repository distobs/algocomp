#include <bits/stdc++.h>

using namespace std;

#define LIMPO 0
#define SUJO 1

int
main(void)
{
	int cfita, ngotas, tmp, dias;

	cin >> cfita >> ngotas;

	vector<int> fita(cfita, LIMPO);

	for (int i = 0; i < ngotas; ++i) {
		cin >> tmp;

		fita[tmp - 1] = SUJO;
	}

	dias = 0;

	while (ngotas != cfita) {
		for (int i = 0; i < ngotas; ++i) {
			if (i != ngotas - 1 && fita[i + 1] == LIMPO) {
				fita[i + 1] = SUJO;
			} else if (i != 0 && fita[i - 1] == LIMPO) {
				fita[i - 1] = SUJO;
			}
		}

		++dias;
	}

	cout << dias << endl;
	return 0;
}
