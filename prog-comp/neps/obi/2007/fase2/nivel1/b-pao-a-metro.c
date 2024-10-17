// https://neps.academy/br/exercise/605

#include <stdio.h>

/*
  Enunciado do problema:
  Dados M pães de comprimentos m1, ..., mM, indique o maior tamanho de uma fatia
  tal que a soma da quantidade de fatias inteiras deste tamanho que conseguimos
  cortar é maior ou igual a um número N.

  Em outras palavras, dados M números de n1 a nM, devemos indicar o maior
  divisor D tal que:

  (n1 / D) + (n2 / D) + ... + (nm / D) >= N,

  dado um número N.
 */

/*
  Raciocínio da Solução:

  À medida que o divisor D aumenta, o somatório diminui. Logo, se o somatório S1
  para um divisor D1 é maior ou igual a N, é claro que o somatório S2 para outro
  divisor D2 < D1 é maior ou igual a N. Observando a função:

  f(D) = n1 / D + n2 / D + ... + nM / D

  Notamos que ela é decrescente. Se aumentarmos D, o somatório diminui.

  Para resolvermos a questão, devemos definir um intervalo possível para a
  resposta. Como o tamanho máximo do pão é 1e4, o intervalo deve ser [1, 1e4].

  Primeiro, fazemos uma busca binária nesse intevalo. Se o valor médio
  encontrado for um possível divisor (f(mid) >= N), salvamo-lo e atualizamos
  o intervalo para [mid + 1, fim], na esperança de encontrar uma fatia maior.
  Se o valor médio encontrado não for um possível divisor, atualizamos o
  intervalo para [inicio, mid - 1], na esperança de encontrar um possível valor.
*/

// o valor é suficiente para cortar as fatias de paes para as n pessoas?
int
valid(int *paes, int npaes, int npessoas, int valor)
{
	int S = 0;

	for (int i = 0; i < npaes; ++i) {
		S += paes[i] / valor;
	}

	return (S >= npessoas);
}

// buscar o valor máximo de fatias
int
search(int *paes, int npaes, int npessoas)
{
	int ans;
	int l = 0;
	int r = (int)1e4;
	int m = (l + r) / 2;

	while (l <= r) {
		if (valid(paes, npaes, npessoas, m)) {
			ans = m;
			l = m + 1;
		} else {
			r = m - 1;
		}

		m = (l + r) / 2;
	}

	return ans;
}

int
main(void)
{
	int npessoas, npaes;

	scanf("%d %d", &npessoas, &npaes);

	int paes[npaes];

	for (int i = 0; i < npaes; ++i) {
		scanf("%d", &paes[i]);
	}

	printf("%d\n", search(paes, npaes, npessoas));

	return 0;
}
