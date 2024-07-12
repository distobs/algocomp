#include <stdio.h>

int
main(void)
{
	int par, nalice, nbob, s, sp;

	scanf("%d", &par);
	scanf("%d", &nalice);
	scanf("%d", &nbob);

	s = nalice + nbob;
	sp = ((s % 2) == 0);

	printf("%d\n", (par == sp));

	return 0;
}
