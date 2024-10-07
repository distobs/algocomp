// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);

	if (n != 2 && n % 2 == 0) {
		puts("YES");
	} else {
		puts("NO");
	}

	return 0;
}
