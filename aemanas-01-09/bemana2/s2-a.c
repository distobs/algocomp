#include <stdio.h>

int
main(void)
{
	int A, B;
	scanf("%d %d",&A, &B);

    	if (A == 0) {
        	puts("C");
    	} else if (B == 0) {
        	puts("B");
    	} else {
        	puts("A");
    	}

    	return 0;
}
