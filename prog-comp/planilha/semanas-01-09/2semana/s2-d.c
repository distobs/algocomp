#include <stdio.h>

#define bool char

/* negocio tosco cara KKKKKKKKKKKKKK */

bool
clean_nonzero(size_t x, size_t y, size_t ymax, size_t xmax,
	      size_t mat[ymax][xmax])
{
	for (size_t i = y + 1; i < ymax; ++i) {
		for (size_t j = x; j > 0; --j) {
			if (mat[i][j] != 0) {
				return 0;
			}
		}
	}

	return 1;
}

int
main(void)
{
	size_t y, x;

	scanf("%zu %zu", &y, &x);

	bool	is_zeronly[y];
	size_t	mat[y][x];

	size_t	zeros = 0;
	bool	fail = 0;
	for (size_t iy = 0; iy < y; ++iy) {
		for (size_t jx = 0; jx < x; ++jx) {
			scanf("%zu", &mat[iy][jx]);
			if (mat[iy][jx] == 0) {
				++zeros;
			}
		}

		is_zeronly[iy]	= (zeros == x);
		zeros		= 0;

		if (iy > 0 && (is_zeronly[iy - 1] && !is_zeronly[iy])) {
			fail = 1;
		}
	}

	if (fail) {
		puts("N");
		return 0;
	}

	for (size_t i = 0; i < y; ++i) {
		for (size_t j = 0; j < x; ++j) {
			if (mat[i][j]) {
				if (clean_nonzero(j, i, y, x, mat)) {
					break;
				} else {
					puts("N");
					return 0;
				}
			}
		}
	}

	puts("S");

	return 0;
}
