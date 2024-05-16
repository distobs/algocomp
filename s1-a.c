#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	char buf[1024];
	long long clicks;

	fgets(buf, 1024, stdin);

	clicks = strtoll(buf, NULL, 10);

	printf("%d\n", (clicks * 4));

	return 0;
}
