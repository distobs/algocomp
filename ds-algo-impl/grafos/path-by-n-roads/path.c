#include <stdio.h>

#define true	1
#define false	0
#define NMAX	50

int adjacent(int g[][NMAX], int a, int b);
int findpath(int g[][NMAX], int c, int a, int b, int n);
void join(int g[][NMAX], int a, int b);

// encontra um caminho de c arestas de um vértice até outro em um grafo.
// isso daqui provavelmente quebra, mas funcionou no caso de teste (que envolveu
// um caminho de uma única estrada num grafo bidirecional com duas cidades).
int
main(void)
{
	int g[NMAX][NMAX];
	int ncities, from_a, to_b, by_c_roads, c1, c2;

	scanf("%d", &ncities);

	scanf("%d %d", &from_a, &to_b);

	scanf("%d", &by_c_roads);

	for (int i = 0; i < ncities; ++i) {
		scanf("%d %d", &c1, &c2);

		join(g, c1, c2);
	}

	if (findpath(g, by_c_roads, from_a, to_b, ncities)) {
		printf("existe caminho de %d ate %d por %d estradas\n", from_a, to_b, by_c_roads);
	} else {
		puts("tem nao valeu");
	}


	return 0;
}

int
adjacent(int g[][NMAX], int a, int b)
{
	return g[a][b];
}

void
join(int g[][NMAX], int a, int b)
{
	g[a][b] = true;
}

int
findpath(int g[][NMAX], int c, int a, int b, int n)
{
	if (c == 1) {
		// existe caminho de a até b de comprimento 1, ou seja, os dois
		// são adjacentes.
		return adjacent(g, a, b);
	}

	for (int i = 0; i < n; ++i) {
		if (adjacent(g, a, c) && findpath(g, c - 1, i, b, n)) {
			return true;
		}
	}

	return false;
}
