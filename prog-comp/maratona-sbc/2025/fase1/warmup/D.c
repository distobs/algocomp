#include <stdio.h>

int
main(void)
{
	int nbrinq, hcarl, tmp, count = 0;

	scanf("%d%d", &nbrinq, &hcarl);

	for (int i = 0; i < nbrinq; ++i) {
		scanf("%d", &tmp);

		if (hcarl >= tmp) {
			++count;
		}
	}

	printf("%d\n", count);

	return 0;
}
