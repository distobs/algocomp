#include <stdio.h>

int
search(int *a, int n, int t)
{
	int h = n - 1;
	int l = 0;
	int m = (h + l) / 2;

	while (l <= h) {
		if (a[m] > t) {
			h = m - 1;
		} else if (a[m] < t) {
			l = m + 1;
		} else if (a[m] == t) {
			return m;
		}

		m = (l + h) / 2;
	}

	return -1;
}

int
main(void)
{
	int n, t;

	puts("Enter the array size.");
	printf("n = ");
	scanf("%d", &n);

	int a[n];

	puts("Enter the ((sorted)) array's elements split by spaces:");
	printf("a = ");

	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
	puts("Enter the target:");
	printf("t = ");

	scanf("%d", &t);

	printf("Your index is: %d\n", search(a, n, t));

	return 0;
}
