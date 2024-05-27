#include <stdio.h>

int
main(void)
{
	long cv, ce, cs,
	     fv, fe, fs;
	long ptc, ptf;

	scanf("%ld %ld %ld %ld %ld %ld", &cv, &ce, &cs, &fv, &fe, &fs);

	ptc = (cv * 3) + ce;
	ptf = (fv * 3) + fe;

	if (ptc == ptf) {
		if (cs > fs) {
			puts("C");
		} else if (cs == fs) {
			puts("=");
		} else {
			puts("F");
		}
	} else {
		if (ptc > ptf) {
			puts("C");
		} else {
			puts("F");
		}
	}

	return 0;
}
