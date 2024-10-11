#include <stdio.h>

int
search(int *v, int n, int t)
{
	int l = 0;
	int h = n - 1;
	int m = (l + h) / 2;

	while (l <= h) {
		if (v[m] == t) {
			return m;
		} else if (v[m] < t) {
			l = m + 1;
		} else if (v[m] > t) {
			h = m - 1;
		}

		m = (l + h) / 2;
	}

	return -1;
}

int
main(void)
{
	int v[6] = {
		-1, 0, 3, 5, 9, 12
	};

	printf("%d\n", search(v, 6, 2));

	return 0;
}
