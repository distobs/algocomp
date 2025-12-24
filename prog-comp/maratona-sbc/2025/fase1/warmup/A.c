#include <stdio.h>

int
main(void)
{
	int n, k, pausa, totalfala, tfala;

	scanf("%d%d", &n, &k);

	pausa = n - 1; /* Existe uma pausa de 1min apos cada fala, menos a
			  última. P = 1 * n */
	totalfala = k - pausa; /* Tempo total de fala = tempo - pausa */
	tfala = totalfala / n;

	printf("%d\n", tfala);

	return 0;
}
