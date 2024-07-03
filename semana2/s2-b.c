#include <stdio.h>

int
main(void)
{
	int P1, C1, P2, C2;
	scanf("%d %d %d %d",&P1, &C1, &P2, &C2);
	
	if (P1 * C1 > P2 * C2) {
        	puts("-1");
    	} else if (P2 * C2 > P1 * C1) {
        	puts("1");
    	} else {
        	puts("0");
    	}

    	return 0;
}
