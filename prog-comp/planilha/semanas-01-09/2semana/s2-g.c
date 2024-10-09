/* da errado :( */
/* Soma todos os elementos de uma linha */
#include <stdio.h>
int
somalinha(int n, int q[n][n], int linha)
{
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		sum += q[linha][i];
	}

	return sum;
}

/* Soma todos os elementos de uma coluna */
int
somacoluna(int n, int q[n][n], int coluna)
{
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		sum += q[i][coluna];
	}

	return sum;
}

/* Encontra a linha contendo o número que foi alterado. Retorna a linha
 * normalmente e retorna as somas nos argumentos. */
int
wrongline(int n, int q[n][n], int *somacorreta, int *somaerrada)
{
	int i, j, k, somai, somaj, somak;

	i = 0; j = 1; k = 2;

	while (k < n) {
		somai = somalinha(n, q, i);
		somaj = somalinha(n, q, j);
		somak = somalinha(n, q, k);

		if (somai == somak) {
			*somacorreta = somai;
			*somaerrada = somaj;
			return j;
		} else if (somai == somaj) {
			*somacorreta = somai;
			*somaerrada = somak;
			return k;
		} else if (somaj == somak) {
			*somacorreta = somaj;
			*somaerrada = somai;
			return i;
		} else {
			++i; ++j; ++k;
		}
	}

	return -1;
}

/* Encontra a coluna contendo o número que foi alterado. Retorna a coluna. */
int
wrongcol(int n, int q[n][n], int somacorreta)
{
	for (int i = 0; i < n; ++i) {
		if (somacoluna(n, q, i) != somacorreta) {
			return i;
		}
	}

	return -1;
}

/* Dado o número alterado, a soma errada e a soma correta, retorna o número
 * original */
int
noriginal(int nalterado, int somaerrada, int somacorreta)
{
	if (somaerrada < somacorreta) {
		return nalterado + (somacorreta - somaerrada);
	} else {
		return nalterado - (somaerrada - somacorreta);
	}
}

int
main(void)
{
	int n;

	scanf("%d", &n);

	int q[n][n];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &q[i][j]);
		}
	}

	int somacorreta, somaerrada;
	int naltl, naltc, nalterado;

	naltl = wrongline(n, q, &somacorreta, &somaerrada);
	naltc = wrongcol(n, q, somacorreta);

	nalterado = q[naltl][naltc];

	int norig = noriginal(nalterado, somaerrada, somacorreta);

	printf("%d %d\n", norig, nalterado);
}
