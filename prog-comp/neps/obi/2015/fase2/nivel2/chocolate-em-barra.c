// https://neps.academy/br/exercise/69

#include <stdio.h>

int
main(void)
{
	int n, half, ax, ay, bx, by;

	scanf("%d", &n);

	half = n / 2;

	scanf("%d %d %d %d", &ax, &ay, &bx, &by);

	if ((ax <= half && bx > half)
	    || (ay <= half && by > half)
	    || (bx <= half && ax > half)
	    || (by <= half && ay > half)) {
		puts("S");
	} else {
		puts("N");
	}

	return 0;
}
