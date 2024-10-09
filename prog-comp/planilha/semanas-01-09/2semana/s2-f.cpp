#include <bits/stdc++.h>

using namespace std;

constexpr int PRETO = 1;
constexpr int BRANCO = -1;

int
main(void)
{
	int nbolas;
	int last, al, bsiz;

	cin >> nbolas;

	last = nbolas - 1;
	al = nbolas - 2;
	vector<vector<int>> bolas(nbolas);

	for (int i = last; i >= 0; --i) {
		bolas[i] = vector<int>(i + 1);
	}

	for (int i = 0; i < nbolas; ++i) {
		cin >> bolas[last][i];
	}

	for (int i = al; i >= 0; --i) {
		bsiz = bolas[i].size();
		for (int j = 0; j < bsiz; ++j) {
			if (bolas[i+1][j] == bolas[i+1][j+1]) {
				bolas[i][j] = PRETO;
			} else {
				bolas[i][j] = BRANCO;
			}
		}
	}

	printf("%s\n", (bolas[0][0] == PRETO) ? "preta" : "branca");

	return 0;
}
