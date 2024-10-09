#include <bits/stdc++.h>

using namespace std;

#define WHITELIST 1
#define BLACKLIST -1

int
main(void)
{
	/*
	 * fila: a0, a1, a2, a3, a4, a5
	 * proibidos: v, w, x, y, z
	 *
	 * map fila -> indice, onde cada elemento da fila aponta para seu
	 * indice
	 *
	 * proibidos'''
	 */

	int nin, nfn, tmp;

	cin >> nin;

	list<int> fila(nin);
	map<int, int> eltoi;

	for (int i = 0; i < nin; ++i) {
		cin >> tmp;
		fila.push_back(tmp);
		eltoi[tmp] = WHITELIST;
	}

	cin >> nfn;

	for (int i = 0; i < nfn; ++i) {
		cin >> tmp;
		eltoi[tmp] = BLACKLIST;
	}

	for (int el : fila) {
		if (eltoi[el] == WHITELIST) {
			cout << el << ' ';
		} else {
			continue;
		}
	}

	putchar('\n');

	return 0;
}
