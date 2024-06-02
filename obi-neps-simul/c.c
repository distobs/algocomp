/* por que não funciona? desisto */
#include <stdio.h>

int
main(void)
{
        size_t nd, objetivo, somatmp;

        scanf("%zu %zu", &nd, &objetivo);

        size_t disparos[nd];

        somatmp = 0;
        size_t j = 0;
        for (size_t i = 0; i < nd; ++i) {
                scanf("%zu", &disparos[i]);
                if (somatmp > objetivo) {
                        somatmp -= disparos[j++];
                } else {
			somatmp += disparos[i];
		}
                if (somatmp == objetivo) {
                        puts("S");
                        return 0;
                }
        }

        if (somatmp != objetivo) {
                puts("N");
        }

        return 0;
}
