#include <stdio.h>

int
numberOfAlternatingGroups(int *col, int sz)
{
	int a, b, c, g;

	g = 0;
	a = 0;
	b = 1;
	c = 2;

	while (a < sz) {
		if (col[a] == col[c] && col[b] != col[a]) {
			++g;
		}

		++a;
		b = (b + 1) % sz;
		c = (c + 1) % sz;
	}

	return g;
}

int
main(void)
{
	int colors1[3] = {1, 1, 1};
	int colors2[5] = {0, 1, 0, 0, 1};

	printf("%d\n", numberOfAlternatingGroups(colors1, 3));
	printf("%d\n", numberOfAlternatingGroups(colors2, 5));
}
