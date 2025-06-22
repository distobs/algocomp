/* https://neps.academy/exercise/1724 */

#include <stdio.h>

typedef unsigned uint;

uint
dsum(uint x) {
	uint sum = 0;

	while (x != 0) {
		sum += x % 10;
		x /= 10;
	}

	return sum;
}

int
main(void)
{
	uint a, b, s, c = 0;

	scanf("%u%u%u", &s, &a, &b);

	for (uint i = a; i <= b; ++i) {
		if (dsum(i) == s) {
			++c;
		}
	}

	printf("%u\n", c);

	return 0;
}
