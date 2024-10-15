// Dado um array ordenado, encontre idx tal que v[idx] é o menor valor maior ou
// igual a um dado número

#include <stdio.h>

int
search(int *v, int n, int t)
{
	int l = 0;
	int r = n - 1;
	int m = (l + r) / 2;
	int ans = -1;

	while (l <= r) {
		if (v[m] < t) {
			l = m + 1;
		} else if (v[m] >= t) {
			ans = m;
			r = m - 1;
		}

		m = (l + r) / 2;
	}

	return ans;
}

int
main(void)
{
	int n, m;

	printf("tamanho vetor n = ");
	scanf("%d", &n);

	printf("perguntas m = ");
	scanf("%d", &m);

	int v[n];

	for (int i = 0; i < n; ++i) {
		scanf("%d", &v[i]);
	}

	int tmp;

	for (int i = 0; i < m; ++i) {
		scanf("%d", &tmp);

		printf("o menor valor >= %d está no idx %d\n", tmp,
		       search(v, n, tmp));
	}

	return 0;
}
