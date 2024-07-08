#include <stdio.h>

int
main(void)
{
	unsigned znasceu, mpensa;

	scanf("%u", &znasceu);

	mpensa = 2024 - ((2024 - znasceu) * 2);

	printf("%u\n", mpensa);

	return 0;
}
