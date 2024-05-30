#include <stdio.h>

int
main(void)
{
	size_t comprimento, corrida;
	scanf("%zu %zu", &comprimento, &corrida);

	printf("%zu\n", comprimento % corrida);

	return 0;
}
