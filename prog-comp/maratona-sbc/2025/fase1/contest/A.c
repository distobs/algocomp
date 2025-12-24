#include <stdio.h>

/* 
 * A entrada:
 * 3 3
 * 20 15 14
 * 12 20 12
 * 18 5  10
 *
 * significa que há 3 frutas e 3 turmas.
 * a segunda linha diz que:
 *
 * na turma 1, 20 pessoas gostam da fruta 1. na t2, 15. na t3, 14. e assim por
 * diante...
 *
 * é uma tabela:
 *
 *       t1   t2    t3
 * f1    20   15    14
 *
 * f2    12   20    12
 *
 * f3    18   5     10
 *
 * 
 */

int
maxcol(int x, int y, int mat[y][x], int in)
{
	int max = mat[0][in];

	for (int i = 1; i < y; ++i) {
		if (mat[i][in] > max) {
			max = mat[i][in];
		}
	}

	return max;
}

int
main(void)
{
	int nfruta, nturma;
	int min = 0;

	scanf("%d%d", &nfruta, &nturma);

	int mat[nfruta][nturma];

	for (int i = 0; i < nfruta; ++i) {
		for (int j = 0; j < nturma; ++j) {
			scanf("%d", &mat[i][j]);
		}
	}

	for (int i = 0; i < nturma; ++i) {
		min += maxcol(nturma, nfruta, mat, i);
	}

	printf("%d\n", min);

	return 0;
}
