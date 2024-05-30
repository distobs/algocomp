#include <stdio.h>

int
main(void)
{
	size_t nvalores, maxconsec = 1, lastconsec, nlastconsec = 1;

	scanf("%zu", &nvalores);

	scanf("%zu", &lastconsec);

	for (size_t i = 0; i < nvalores - 1; ++i) {
		size_t tmp;
		scanf("%zu", &tmp);

		if (tmp != lastconsec) {
			lastconsec = tmp;
			nlastconsec = 1;
		} else if (tmp == lastconsec) {
			++nlastconsec;
		}

		if (nlastconsec > maxconsec) {
			maxconsec = nlastconsec;
		}
	}

	printf("%zu\n", maxconsec);

	return 0;
}
