#include <stdio.h>
#include <string.h>

/* Counting sort: sorts an array of n elements with each element being limited
   to the interval 0...C. */
int
main(void)
{
	int n, C;

	printf("n = ");
	scanf("%d", &n);

	printf("C = ");
	scanf("%d", &C);

	int array[n];
	int book[C + 1];

	memset(book, 0, (C + 1) * sizeof(int));

	for (int i = 0; i < n; ++i) {
		scanf("%d", &array[n]);
		++book[array[n]];
	}

	for (int i = 0; i <= C; ++i) {
		if (book[i]) {
			for (int j = 0; j < book[i]; ++j) {
				printf("%d ", i);
			}
		}
	}

	putchar('\n');

	return 0;
}
