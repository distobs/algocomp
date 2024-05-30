#include <stdio.h>

int
main(void)
{
	size_t a, b, c, second;

	scanf("%zu %zu %zu", &a, &b, &c);

	if (b > a && a > c) {
		second = a;
	} else if (c > a && a > b) {
		second = a;
	} else if (a > b && b > c) {
		second = b;
	} else if (b > a && c > b) {
		second = b;
	} else if (a > b && c > b) {
		second = c;
	} else if (b > a && b > c) {
		second = c;
	}

	printf("%zu\n", second);

	return 0;
}
