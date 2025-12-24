#include <stdio.h>
#include <string.h>

void
alho(int n, int baralho[n], int tabela[n])
{
	int original[n];
	memcpy(original, baralho, n);

	for (int i = 0; i < n; ++i) {
		baralho[tabela[i] - 1] = original[i];
	}
}

int
main(void)
{
	unsigned long long count = 0;
	int ncartas;

	scanf("%d", &ncartas);

	int baralho[ncartas], desejado[ncartas], tabela[ncartas];

	for (int i = 0; i < ncartas; ++i) {
		scanf("%d", &baralho[i]);
	}

	for (int i = 0; i < ncartas; ++i) {
		scanf("%d", &desejado[i]);
	}

	for (int i = 0; i < ncartas; ++i) {
		scanf("%d", &tabela[i]);
	}

	for (int i = 0; i < ncartas; ++i) {
		printf("%d ", baralho[i]);
	}
	putchar('\n');

	alho(ncartas, baralho, tabela);

	for (int i = 0; i < ncartas; ++i) {
		printf("%d ", baralho[i]);
	}

	putchar('\n');

	//while (count < (unsigned long long)1e9) {
	//}

	return 0;
}
