#include <stddef.h>
#include <stdio.h>

int
main(void)
{
        size_t diario, mudas, esperado, dias, total;

        scanf("%zu", &diario);
        scanf("%zu", &mudas);
        scanf("%zu", &esperado);

        dias = 0;
        total = diario;

        while (total < esperado) {
                total = total + (total * mudas);
                ++dias;
        }

        printf("%zu\n", dias);

        return 0;
}
