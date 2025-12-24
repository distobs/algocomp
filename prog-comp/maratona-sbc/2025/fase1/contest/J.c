#include <stdio.h>
#include <stdint.h>


int
main(void)
{
	unsigned flag[4] = {0, 0, 0, 0};
	unsigned miss = 4;
	unsigned tmp;

	for (unsigned i = 0; i < 10 && miss; ++i) {
		scanf("%u", &tmp);

		if (!flag[tmp - 1]) {
			flag[tmp - 1] = 1;
			--miss;
		}
	}

	printf("%u\n", miss);
}
