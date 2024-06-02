/* por que não funciona? desisto */
#include <stdio.h>

int
main(void)
{
        size_t nd, objetivo, somatmp;

        scanf("%zu %zu", &nd, &objetivo);

        size_t disparos[nd];

        for (size_t i = 0; i < nd; ++i) {
                scanf("%zu", &disparos[i]);
	}

        somatmp = 0;
	size_t i = 0;
        size_t j = 0;
	while (i < nd) {
		somatmp = somatmp + disparos[i];
                while (somatmp > objetivo) { /* thx brennon */
                        somatmp -= disparos[j];
			++j;
                }

                if (somatmp == objetivo) {
                        puts("S");
                        return 0;
                }

		++i;
        }

	puts("N");

        return 0;
}
