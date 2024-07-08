#include <stdio.h>

int
main(void)
{
	char hello[6] = "hello\0";

	char tmp;
	size_t i = 0;
	size_t j = 4;

	while (i < j) {
		tmp = hello[i];
		hello[i] = hello[j];
		hello[j] = tmp;
		++i; --j;
	}

	puts(hello);
	return 0;
}
