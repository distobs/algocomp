#include <stdio.h>

int
numWaterBottles(int nb, int nx)
{
	int bebidas, vazias, tmp1;

	bebidas = vazias = nb;

	while (vazias >= nx) {
		tmp1	 = vazias / nx;
		bebidas	+= tmp1;
		vazias	 = tmp1 + (vazias % nx);
	}

	return bebidas;
}

int
main(void)
{
	printf("%d\n", numWaterBottles(15, 4));
	printf("%d\n", numWaterBottles(9, 3));

	return 0;
}
