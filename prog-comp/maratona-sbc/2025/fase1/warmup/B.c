#include <stdio.h>

int
main(void)
{
	char res;
	int low = 0;
	int high = 1000;
	int mid = high / 2;

	while (1) {
		printf("? %d\n", mid);
		fflush(stdout);

		scanf("%c", &res);

		if (res == '>') {
			low = mid + 1;
			mid = (low + high) / 2;
		} else if (res == '<') {
			high = mid - 1;
			mid = (low + high) / 2;
		} else if (res == '=') {
			printf("! %d\n", mid);
			return 0;
		}
	}
}
