// wasnt able to run in school pc

#include <stdio.h>

int
main(void)
{
        int n, q;

        scanf("%d %d", &n, &q);

        int v[n];
        int pfx[n];

        for (int i = 0; i < n; ++i) {
                scanf("%d", &v[i]);
        }

        pfx[0] = v[0];

        for (int i = 1; i < n; ++i) {
                pfx[i] = pfx[i-1] + v[i];
        }

        for (int i = 0; i < q; ++i) {
                int l, r;

                scanf("%d %d", &l, &r);

                printf("%d\n", pfx[r] - pfx[l - 1]);
        }

        return 0;
}
