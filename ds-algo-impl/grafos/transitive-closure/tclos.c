#include <stdio.h>

#define NMAX 50

int g[NMAX][NMAX];
int p[NMAX][NMAX];

void
transclose(int n)
{
}

void
outmat(int n)
{
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%d; ", g[i][j]);
		}

		putchar('\n');
	}
}

// gera o fechamento transitivo de uma matriz de adjacência. isto é, uma matriz
// quadrada path tal que, para todo i, j < path.size(), path[i][j] é 1 <=>
// houver caminho de i até j, não importando o tamanho do caminho.
int
main(void)
{
	int n;

	puts("Matrix size (n):");
	scanf("%d", &n);

	transclose(n);

	outmat(n);

	return 0;
}
