#include <stdio.h>
#include <stdbool.h>

bool
t_possible(int s1, int s2, int s3)
{
	return s1 < (s2 + s3)
		&& s2 < (s1 + s3)
		&& s3 < (s2 + s1);
}

int
main(void)
{
	int v1, v2, v3, v4;

	scanf("%d %d %d %d", &v1, &v2, &v3, &v4);

	printf("%c\n",
	       (t_possible(v1, v2, v3)
		|| t_possible(v1, v2, v4)
		|| t_possible(v1, v3, v4)
		|| t_possible(v2, v3, v4)) ? 'S' : 'N');

	return 0;
}
