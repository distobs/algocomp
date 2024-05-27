#include <stdio.h>

int
main(void)
{
	unsigned long c1_id, c1_dt, c1_vl;
	unsigned long c2_id, c2_dt, c2_vl;
	double c1_tp, c2_tp;

	scanf("%lu %lu %lu", &c1_id, &c1_dt, &c1_vl);
	scanf("%lu %lu %lu", &c2_id, &c2_dt, &c2_vl);

	// S = S0 + vt (S0 = 0)
	// S = vt
	// t = S/v
	c1_tp = (double)c1_dt / (double)c1_vl;
	c2_tp = (double)c2_dt / (double)c2_vl;

	if (c2_tp > c1_tp) {
		printf("%lu\n", c1_id);
	} else {
		printf("%lu\n", c2_id);
	}

	return 0;
}
