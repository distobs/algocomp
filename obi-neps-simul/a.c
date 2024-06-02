#include <stdio.h>

int
main(void)
{
	size_t n[4], min, max;

	scanf("%zu %zu %zu %zu", &n[0], &n[1], &n[2], &n[3]);

	min = max = n[0];

	for (size_t i = 1; i < 4; ++i) {
		if (n[i] < min) {
			min = n[i];
		} else if (n[i] > max) {
			max = n[i];
		}
	}

	printf("%zu\n", max + min);

	return 0;
}
