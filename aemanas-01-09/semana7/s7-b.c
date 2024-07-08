#include <stdio.h>

int
main(void)
{
    int min, max;
    int a[4];

    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    max = min = a[0];

    for (int i = 1; i < 4; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("%d\n", max + min);

    return 0;
}
